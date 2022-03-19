#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void)
{
	pid_t pid_1;
	pid_1=fork();
	if(pid_1==0)
	{
	printf("execute ls inside child\n");
	execl("/bin/ls","ls","-lh",0);
	printf("i am child with delay of 5 sec and my child pro pid = %d\n",getpid());
	}
	else
	{
	int pid_2;
	printf("i am parent pro pid = %d\n",getpid());
	pid_2 = wait(0);
	printf("parent saying ...child %d exited\n" ,pid_2);
	printf("i am parent process pro pid = %d\n",getpid());
	}
return 0;
}
