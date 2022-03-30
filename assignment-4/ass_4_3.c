/*a pthread program that implements simple initialization code. */

#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;        //initialization 

void *init()
{
    printf("Inside the init() function...this will call once only...\n");
}

void *mythread(void *i)
{
    printf("I am printing mythread argument value : %d\n", (int *)i);
    pthread_once(&once,(void *)init);
    printf("exit from mythread() function : %d\n\n",(int *)i);
    //printf("\n");
}

int main()
{
    pthread_t thread1,thread2,thread3;
    pthread_create(&thread1,NULL,mythread,(void *)10);
    pthread_create(&thread2,NULL,mythread,(void *)2);
    pthread_create(&thread3,NULL,mythread,(void *)3);
    printf("exit from main thread\n");
    pthread_exit(NULL);
    //printf("exit from main thread\n");
}