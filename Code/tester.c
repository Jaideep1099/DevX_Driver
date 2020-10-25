#include <fcntl.h>
#include <stdio.h>

int main()
{
	char buffer[1];
	char ch;
	int fd;
	fd = open("/dev/devX", O_RDWR);
	while(buffer[0]!='?'){
		printf("type: ");
		scanf("%c",buffer);
		scanf("%c",&ch);
		write(fd,buffer,1,NULL);
	}
	close(fd);
	return 0;
}
