#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

char buf1[]="LAB";
char buf2[]="OS linux";
int main(void){
	int fd;
	if((fd=creat("file.gol",0666))<0){
		perror("creation error");
		exit(1);
	}
	if(write(fd,buf1,sizeof(buf1))<0)
	{
		perror("writing error");
		exit(2);
	}
	if(lseek(fd,4096,SEEK_SET)<0)
	{ 
		perror("positioning error");
		exit(3);
		
	}
	if(write(fd,buf2,sizeof(buf2))<0)
	{
	
		perror ("writing error");
		exit(2);
	}
}