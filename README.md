# 课程作业 1120202542-罗益善
## 操作系统为ubuntu22.04
- sudo apt-get install make               # make
- sudo apt-get install gcc                # gcc  
- sudo apt-get install gdb                # GNU debugger
- sudo apt-get install build-essential    # build-essential packages, include binary utilities, gcc, make, and so on
- sudo apt-get install libreadline-dev    # a library used later
- sudo apt-get install libsdl2-dev        # a library used later
- sudo apt-get install llvm-13            # llvm project, which contains libraries used later
- sudo apt-get install verilator          # 仿真器
- sudo apt-get install gtkwave            # 波形查看器
- 如果libsdl2-dev无法安装(我也遇到过，采用aptitude)
    - sudo apt-get install aptitude 
    - sudo aptitude install libsdl2-dev
## 安装完相关工具后需要配置环境变量
- source set.bash
## 运行程序
### 进入nanos-lite 目录
- cd nanos-lite
### 更新生成的二进制文件，我们需要把它引导到内存的相应位置
- make ARCH=riscv64-npc update
### 运行
- make ARCH=riscv64-npc run
### 现在的状态是打开了波形生成，并且优化等级开到了最低，所以仿真速度较慢，我i9 13900kf 跑完结果需要 一分半
### 如果仿真速度过慢，可以修改npc目录下Makefile文件第8行，将-O0改为-O3,并且修改./npc/npc_nemu/src/sim/verilator_use.cc文件中第18行的宏定义#define open_dump 1，将其修改文#define open_dump 0,即关闭dump，不生成波形，我这边实测仿真速度可以加快十倍以上
# 出现问题请联系我 邮箱1660509539@qq.com