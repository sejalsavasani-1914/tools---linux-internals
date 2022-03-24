#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

//create global variable
int a=0;

pthread_t tid;

void *thread(void *arg)
{
    int *id = (int *)arg;
	printf("inside thread.\n");
    ++a;
    printf("Thread id is = %d, global variable value = %d\n",*id,++a);
	return NULL;
}

int main(void)
{
    for(int i=0;i<3;i++)
    {
    	pthread_create(&tid,NULL,thread,NULL);
    }
    pthread_exit(NULL);
return 0;
}