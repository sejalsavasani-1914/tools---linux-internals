#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	printf("execute assinment_2_1(2).c file\n");

	execl("/home/sejal/training/linux_2/assign1-2","./file",0);

	return 0;
}
