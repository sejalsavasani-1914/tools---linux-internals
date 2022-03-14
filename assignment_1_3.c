#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
mode_t umask(mode_t mask);


int main(){
	int fd;
	umask(022);
	if ((fd=creat("temp",0666))==-1)
	 perror("creat");
	system("ls -l temp");
    return 0;
	}