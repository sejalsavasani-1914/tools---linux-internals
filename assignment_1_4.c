#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,fd1,len,s;
	char w_buf[50]="assignment4 for tools-linux internals.",r_buf[50],c[50];
	fd1 = open("assignment1.txt",O_RDONLY);
	s=read(fd1,c,10);
	fd = open("write2.txt",O_CREAT | O_RDWR , 777);
	len = write(fd, w_buf , 50);
	printf("return the value from assignment1 open =%d\n",len);
	lseek(fd,4,SEEK_SET);
	lseek(fd,2,SEEK_CUR);
	lseek(fd,2,SEEK_END);
	read(fd,c,len);
	printf("read buffer data is : %s\n",c);
	close(fd);
	close(fd1);
	return 0;
}
