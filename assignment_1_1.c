#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,fd1,len;
	char r[50];
	fd = open("assignment1.txt",O_CREAT | O_RDONLY);
	fd1 = open("write1.txt",O_WRONLY);
	len = read(fd, r , 20);
	if(write(fd1,r,strlen(r))==-1)
	{
		printf("error\n");
		exit(0);
	}
	else
	{
		printf("written bytes = %d\n",strlen(r));
	}
	close(fd);
	return 0;
}
