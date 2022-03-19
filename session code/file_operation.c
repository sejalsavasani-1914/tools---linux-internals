#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,len;
	char w_buf[50]="hi,how are you?",r_buf[50];
	fd = open("write.txt",O_CREAT|O_RDWR , 777);
	len = write(fd, w_buf , 50);
	printf("return the value from write open =%d\n",len);
	lseek(fd,4,SEEK_SET);
	lseek(fd,10,SEEK_CUR);
	lseek(fd,-3,SEEK_END);
	read(fd,r_buf,len);
	printf("data from buffer read = %s\n",r_buf);
	close(fd);
	return 0;
}
