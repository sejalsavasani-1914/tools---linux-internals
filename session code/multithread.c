#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

pthread_t tid1,tid2;

void *thread1(void *arg)
{
	//sleep(2);
	printf("inside thread1.\n");
	return NULL;
}

void *thread2(void *arg)
{
	//sleep(2);
	printf("inside thread2.\n");
	return NULL;
}

int main(void)
{
	pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	printf("end of thread\n");
return 0;
}

