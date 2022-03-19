#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2;
fd2 = open("file_creat.txt", O_CREAT | O_RDWR , 777);
return 0;
}
