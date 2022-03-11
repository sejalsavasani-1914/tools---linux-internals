#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,len;
	char w_buf[50]="assignment1 for tools-linux internals.",r_buf[50];
	fd = open("assignment2.txt",O_CREAT | O_RDWR , 777);
	len = write(fd, w_buf , 50);
	printf("return the value from assignment2 open =%d\n",len);
	lseek(fd,4,SEEK_SET);
	lseek(fd,2,SEEK_CUR);
	lseek(fd,2,SEEK_END);
	read(fd,r_buf,len);
	printf("read buffer data is : %s\n",r_buf);
	close(fd);
	return 0;
}
