#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	pid_t pid;
	int option ,stat;

	while(1)
	{
		printf("enter 1 to exec 'ls' program in child and 0 to exit\n");
		scanf("%d",&option);
		if(fork()==0)
		{
			execl("/bin/ls","ls",0);
			exit(0);
		}
	}
}
		
