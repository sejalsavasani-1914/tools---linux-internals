#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/wait.h>

int main(void)
{
	pid_t pid_1;
    printf("current process pid is = %d\n",getpid());
	pid_1 = fork();
    if(pid_1==0)
    {
        printf("inside the child process\n");
        execl("/bin/ls","ls","-lh","linux.txt",0);
    }
    else
    {
        wait(0);
        printf("parent pid is : %d\n",getpid());
    }
}