
import os

file = open("vsrc/riscv64_ysyx/mycpu_top.v",'r')
content = file.read()
content = "/* verilator lint_off WIDTH */ \n" + content
file = open("vsrc/riscv64_ysyx/mycpu_top.v",'w')
file.write(content)
file.close()