#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
#include<stdlib.h>

void *fun1(void *arg)
{    
    pthread_t thread_ID;
    thread_ID = pthread_self();
    printf("Thread id is = %lu\n",thread_ID);
    printf("Current process id is = %d\n",getpid());
    return NULL;
}

int main()
{
    pthread_t tid1;
    printf("create thread1.\n");
    pthread_create(&tid1,NULL,fun1,(void *)&tid1);
    pthread_join(tid1,NULL);
    return 0;
}