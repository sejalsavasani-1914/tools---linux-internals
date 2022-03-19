#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid_1;
	pid_1=fork();
	if(pid_1==0)
	{
	printf("execute ls inside child\n");
	execl("/bin/ls","ls","-lh",0);
	}
	return 0;
}
