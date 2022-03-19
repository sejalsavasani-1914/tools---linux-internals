#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<semaphore.h>

int sharevar = 5;

sem_t my_sem;

void *thread_inc(void *arg)
{
sem_wait(&my_sem);
sharevar++;
sem_post(&my_sem);
}

void *thread_dec(void *arg)
{
sem_wait(&my_sem);
sharevar--;
sem_post(&my_sem);
}

int main()
{
pthread_t thread1,thread2;

sem_init(&my_sem , 0 , 1);

pthread_create(&thread1,NULL,thread_inc,NULL);
pthread_create(&thread2,NULL,thread_dec,NULL);

pthread_join(thread1,NULL);
pthread_join(thread1,NULL);

printf("sharedval = %d \n",sharevar);
return 0;
}
