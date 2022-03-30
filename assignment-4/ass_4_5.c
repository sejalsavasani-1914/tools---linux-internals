/*a program that implements threads synchronization using pthread spinlock techniques. */

#define _XOPEN_SOURCE 600
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<errno.h>
#include<bits/types.h>
#include<sys/types.h>

static pthread_spinlock_t sl;
volatile int slock;

void *spinlockThread(void *i)
{
    int rc;

    //this spinlock unlock process will occure after main spinlock unlock process.
    printf("%d thread getting spinlock.\n",(int *)i);
    rc = pthread_spin_lock(&sl);
    printf("%d thread getting spin unlock.\n",(int *)i);
    rc = pthread_spin_unlock(&sl);
    printf("%d thread is completed.\n",(int *)i);
    return NULL;
}

int main()
{
    int rc = 0;
    pthread_t thread;
	if(pthread_spin_init(&sl,PTHREAD_PROCESS_PRIVATE)!=0)
		perror("init");
	printf("main , get spin lock\n");
	rc = pthread_spin_lock(&sl);
	printf("main creat the spin lock thread\n");
	rc = pthread_create(&thread,NULL,spinlockThread, (int *)1);
    printf("main , wait a bit holding the spin lock\n");
	sleep(5);
    printf("main , unlock the spin lock\n");
	rc = pthread_spin_unlock(&sl);
    if(rc==0)
		printf("main thread successfully unlocked\n");
	else
		printf("main thread not successfully unlocked\n");
    printf("main wait for the thread to end\n");
	rc = pthread_join(thread,NULL);
	printf("main completed\n");
	return 0;
}