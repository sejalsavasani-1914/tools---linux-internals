#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/sejal/training/linux_2/assignment_2_1_2","./assignment_2_1_2", "assignment_2_1_2 file", "discriptor", 0) ;
	
	printf("\n");
	
return 0;
}