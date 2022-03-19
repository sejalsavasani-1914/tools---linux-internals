#include<stdio.h>
#include"library.h"

int main(int argc,char *argv[])
{
    int a1,a2,b1,b2;
    a1=34;
    a2=87;
    b1=add(a1,a2);
    b2=sub(a1,a2);
    printf("Addition of %d and %d is : %d \n",a1,a2,b1);
    printf("Subtraction of %d and %d is : %d \n",a1,a2,b2);
    return 0;
}