#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>



int main(){
	
	printf("program 1\n\n");
	printf("ececl command started\n");
	
	execl("/home/sejal/training/linux_2/assignment_2_4_2", "./assignment_2_4_2", "test", "file", "program2", 0) ;
	printf("\n");
	
	
return 0;
}