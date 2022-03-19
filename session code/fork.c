#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("current process\n");
	fork();
	//printf("process1\n");
	fork();
	printf("process1\n");
	printf("process2\n");
	while(1);
	return 0;
}
