#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("execute ls\n");
	execl("/home/sejal/training/linux_2/fork","./fork",0);
	printf("i execute ls program");
	return 0;
}
