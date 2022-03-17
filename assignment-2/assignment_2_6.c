#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void fun1()
{
    printf("This is inside function-1\n");
}

void fun2()
{
    printf("This is inside function-2\n");
}

void fun3()
{
    printf("This is inside function-3\n");
}

int main()
{
    printf("calling function-1\n");
	atexit(fun1);
    printf("calling function-2\n");
	atexit(fun2);
    printf("calling function-3\n");
	atexit(fun3);
    return 0;
}