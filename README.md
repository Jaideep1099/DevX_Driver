# DevX_Driver
Simple Linux Character Driver - writes and read from device file

To see kernel outputs

    $sudo tail -f /var/log/syslog

To compile driver module

    $cd Code/driver_module
    $make

Create device file

    $sudo mknod -m 666 devX c 240 0
 
Insert kernel module by

    $sudo insmod devX_driver.ko
  
Compile tester & reader with gcc

    $gcc tester.c -o tester
    $gcc reader.c -o reader
    $./tester
    $./reader

Remove driver module

    $sudo rmmod devX_driver

To clear compiled object files

    $make clean
