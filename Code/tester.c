#include <fcntl.h>
#include <stdio.h>

int main()
{
	char buffer[1];
	char ch;
	int fd;
	fd = open("/dev/devX", O_RDWR);
	
		printf("type: ");
		scanf("%c",&ch);
		buffer[0] = ch;
		write(fd,buffer,1,NULL);

	close(fd);
	return 0;
}
