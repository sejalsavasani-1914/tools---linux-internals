#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/sejal/training/linux_2/assignment_2_3_2", "./assignment_2_3_2", "test", "file", 0) ;
	
	printf("\n");
	
return 0;
}