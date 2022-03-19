#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("execute ls\n");
	execl("/bin/ls","ls","-lh",0);
	printf("i execute ls program");
	return 0;
}
