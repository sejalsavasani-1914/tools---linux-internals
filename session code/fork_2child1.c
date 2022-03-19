#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/wait.h>

int main(void)
{
	pid_t child_1 , child_2;
	printf("current/parent pid = %d\n",getpid());
	child_1 = fork();
	if(child_1==0)
	{
		printf("child ONE pid = %d\n",getpid());
	}
	else
	{
		child_2 = fork();
		if(child_2==0)
		{
			printf("child TWO pid = %d\n",getpid());
		}
		else
		{
			wait(0);
			printf("parent of ONE & TWO processes pid = %d\n",getppid());
		}
	}
	return 0;
}
