#include <fcntl.h>
#include <stdio.h>

int main()
{
	char buffer[1];
	int fd;
	fd = open("/dev/devX", O_RDWR);

	while(1){
		read(fd,buffer,1,NULL);
		if(buffer[0]!=0)
			printf("%c\n",buffer[0]);
	}
	
	close(fd);
	return 0;
}
