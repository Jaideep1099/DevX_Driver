#include <fcntl.h>
#include <stdio.h>

int main()
{
	char buffer[1];
	int fd;
	fd = open("/dev/devX", O_RDWR);
	char res;
	read(fd,buffer,1,NULL);
	printf("%c\n",buffer[0]);
	
	close(fd);
	return 0;
}
