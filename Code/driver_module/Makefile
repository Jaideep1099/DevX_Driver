ifneq (${KERNELRELEASE},)
	obj-m := devX_driver.o
else
	KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build

default:
	${MAKE} -C ${KERNEL_SOURCE} M=${PWD} modules
clean:
	${MAKE} -C ${KERNEL_SOURCE} M=${PWD} clean
endif
