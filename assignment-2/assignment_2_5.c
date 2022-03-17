#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/wait.h>

int main()
{
	int fd,len;
	char w_buf[50]="hi,this is assignment-2!";
	char r_buf[50];
	fd = open("assignment2_5.txt",O_CREAT|O_RDWR, 0777);
	len = write(fd, w_buf , 50);
	printf("return the value from assignment2_5 open = %d\n",len);
	lseek(fd,0,SEEK_SET);
	read(fd,r_buf,len);
    printf("data from buffer read = %s\n",r_buf);
	close(fd);
	return 0;
}