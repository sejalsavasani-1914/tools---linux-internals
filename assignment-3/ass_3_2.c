#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
#include<stdlib.h>

void *fun1(void *arg)
{   
    int i,a=0; 
    pthread_t thread_ID;
    thread_ID = pthread_self();
    for(int i=0;i<10;i++)
    {
       //a++;
        printf("inside the fun1() function.\n");
        a++;
        if(a==3)
        {
            printf("thread is cancel\n");
            pthread_cancel(thread_ID);
        }
    }
    return NULL;
}

int main()
{
    pthread_t tid1;
    printf("create thread1.\n");
    pthread_create(&tid1,NULL,fun1,(void *)&tid1);
    pthread_join(tid1,NULL);
    printf("back to main().\n");
    //pthread_exit(NULL);
    return 0;
}