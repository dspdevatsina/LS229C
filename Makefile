ifneq ($(KERNELRELEASE),)

obj-m += hello.o
hello-objs:=hello_main.o
else
MOD_PWD := $(shell pwd)
DRIVERS_ROOT:=$(MOD_PWD)/../
include $(MOD_PWD)/../../build/drivers.rules
endif
