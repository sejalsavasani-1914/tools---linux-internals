#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/wait.h>

void fun1()
{
    for(int i=0;i<=5;i++)
    {
        printf("number is : %d\n",i);
    }
}

int main(void)
{
	pid_t child_1 , child_2;
	printf("current process pid is = %d\n",getpid());
	child_1 = fork();
	if(child_1==0)
	{
		printf("child ONE pid = %d\n",getpid());
        fun1();
	}
	else
	{
		child_2 = fork();
		if(child_2==0)
		{
			printf("child TWO pid = %d\n",getpid());
            printf("child two is doing task-2 \n");
		}
		else
		{
			wait(0);
			printf("parent of ONE & TWO processes pid = %d\n",getpid());
		}
	}
	return 0;
}