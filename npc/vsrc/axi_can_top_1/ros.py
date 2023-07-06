#! /usr/bin/env python
# encoding: utf-8
import rospy
import serial
import Queue
import threading
import struct
from geometry_msg.msg import Twist
from sensor_msgs.msg import Imu, MagneticField


HEAD0 = 0xCE
HEAD1 = 0xFA
TAIL = 0xAD

class ZxcarDriver:
  
  def __init__(self):
    
    # 初始化串口
    self.ser = serial.Serial(port='/dev/zxcar', baudrate=115200)
    
    if self.ser.isOpen():
    	print("Serial open success!")
    else:
      print("serial open failed!")

    
    
    """ros部分代码"""
    # 创建ros节点
    node_name="car_driver_node";
    rospy.init_node(node_name);

    rospy.on_shutdown(self.onShutdown)

    # 订阅/cmd_vel
    rospy.Subscriber("/cmd_vel", Twist, self.cmd_vel_callback)
    # 发布者
    self.velPublisher = rospy.Publisher("/zxcar/get_vel",Twist,queue_size=50)
    # 发布陀螺仪的数据
    self.imuPublisher = rospy.Publisher("/zxcar/imu",Imu,queue_size=100)
    # 地磁的数据
    self.magPublisher = rospy.Publisher("/zxcar/magnetic",MagneticField,queue_size=50)

    # 开启线程不断地接收数据
    threading.Thread(target=self.recv_data).start()
  
  	# 让ros节点始终运行
    while not rospy.is_shutdown():
      
      rospy.spin()
  
		# 速度的回调函数  
  def cmd_vel_callback(self，msg):
    print("cmd callback"，msg.linear.x, msg.angular.z)
    # cmd = [HEAD0, HEAD1, 0x05, 4, 250, 0, 244, 1, TAIL]
    cmd = [HEAD0, HEAD1, 0x05, 4]
    
    velocity = msg.linear.x * 1000
    angular = msg.angular.z * 1000
    
    velocity_param = bytearray(struct.pack('h', int(velocity)))
    cmd.append(velocity_param[0])
    cmd.append(velocity_param[1])
    
    angular_Param = bytearray(struct.pack('h', int(angular)))
    cmd.append(angular_param[0])
    cmd.append(angular_param[1])
    
    cmd.append(TAIL)
    
    # 将当前数据发送给下位机
    #self.ser.write(cmd)
    self.send_data(cmd)
    
  def onShutdown(self):
    twist = Twist()
    twist.angular.z = 0
    twist.lineaer.z = 0
    self.velPublisher.publish(twist)
    
    print("zxcar stop")
  
    # 测试用
   # while True:
   #   # 每隔一秒发送一次数据
   #	  cmd = [HEAD0, HEAD1, 0x05, 4, 256, 0, 244, 1, TAIL]
   #   self.send_data(cmd)
   #   time.sleep(1)
   #   # 每隔一秒发送一次数据
   # 	cmd = [HEAD0, HEAD1, 0x05, 4, 0, 0, 0, 0, TAIL]
   #   self.send_data(cmd)
   #   time.sleep(1)
    
  def parse_data(self, data):
    """
	帧头0，帧头1，类型，长度     温度         三轴加速度            三轴角速度
CE FA 03 19   					  EE 0E     F8 FE E4 00 88 3D    CF FF A1 00 40 00     																		三轴地磁   	  			线速度				角速度 		帧尾
00 A1 FF CF 00 40    00 00      00 00       AD
		"""
    if data[0] == HEAD0 and data[1] == HEAD1:
      if data[2] == 0x03:
        # 说明是下位机发送出来的数据
      	length = data[3]
        
        # 温度的数据
        # print(0x0E<<8 | 0xEE)  # 下位机温度会放大100倍
        temperature = struct.unpack('h', bytearray(data[4:6]))[0]
        # print(temperature)
        
    	ax = struct.unpack('h', bytearray(data[6:8]))[0]
        ay = struct.unpack('h', bytearray(data[8:10]))[0]
        az = struct.unpack('h', bytearray(data[10:12]))[0]
        
        gx = struct.unpack('h', bytearray(data[12:14]))[0]
        gy = struct.unpack('h', bytearray(data[14:16]))[0]
        gz = struct.unpack('h', bytearray(data[16:18]))[0]
        
        mx = struct.unpack('h', bytearray(data[18:20]))[0]
        my = struct.unpack('h', bytearray(data[20:22]))[0]
        mz = struct.unpack('h', bytearray(data[22:24]))[0]
    
    	vel = struct.unpack('h', bytearray(data[24:26]))[0]
       	angular = struct.unpack('h', bytearray(data[26:28]))[0]
        
        tail = data[28]
        
        # 判断帧尾
        if tail == 0xAD:
          #print("数据帧校验成功")
          
          # 将数据通过节点发布出去
          imu = IMU()
          # 加速度的缩放系数
          accel_ratio = 1/16384.0
          imu.linear_acceleration.x = ax * accel_ratio
          imu.linear_acceleration.y = ay * accel_ratio
          imu.linear_acceleration.z = az * accel_ratio
          
          # 角速度的缩放系数
          gyro_ratio = 1/65.5/(180/3.1415926)
          imu.orientation.x = gx * gyro_ratio
          imu.orientation.y = gy * gyro_ratio
          imu.orientation.z = gz * gyro_ratio
          # ros部分代码
          self.imuPublisher.publish(imu)  # 话题要与前方保持一致
          
          mag = MagneticField()
          mag.magnetic_field.x = mx
          mag.magnetic_field.y = mx
          mag.magnetic_field.z = mx
          # ros部分代码
			self.magPublisher.publish(mag)
             
          velocity = vel / 1000  # 下位机为了便于传输，线速度角速度都放大了1000倍
          angular = angular / 1000
          
          twist = Twist()
         	twist.angular.z = angualr
          twist.lineaer.z = velocity
          self.velPublisher.publish(twist)
        else:
          print("数据帧校验失败")
          
        
  def send_data(self, cmd):
     self.ser.write(cmd) # cmd在上面
          
  def recv_data(self):
    
    data = bytearray([])
    
    while True:
      # print("接收数据")
      # 读取串口数据
      n = self.ser.inWaiting()  #缓冲区数据
      # print(n)
      if n :
        data += self.ser.read(n) # +=把短的加在一起
       # print(data)   # 电信号
      
      if len(data) > 0 and n == 0: # 相邻两帧数据有空闲段
        # 说明读取到了完整的一帧数据
        #print(data)    
        #print(len(data))  # 每一帧数据是29
        self.parse_data(data)
        # 清空data
        data = bytearray[]
        
if __name__  == '__main__':
  ZxcarDriver()