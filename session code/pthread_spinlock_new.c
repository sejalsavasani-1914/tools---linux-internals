#define _XOPEN_SOURCE 600
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<errno.h>
#include<bits/types.h>
#include<sys/types.h>

static pthread_spinlock_t spinlock;
volatile int slock;

void *spinlockThread(void *i)
{
	int rc;
	int count=0;

	printf("Entered thread %d,getting spin lock \n" ,(int *)i);

	rc = pthread_spin_lock(&spinlock);

	printf("%d thread unlock the spin lock\n",(int *)i);

	rc = pthread_spin_unlock(&spinlock);

	printf("%d thread complete\n",(int *)i);
return NULL;
}


int main()
{
	int rc=0;
	pthread_t thread ,thread1;
	if(pthread_spin_init(&spinlock,PTHREAD_PROCESS_PRIVATE)!=0)
		perror("init");
	printf("main , get spin lock\n");
	rc = pthread_spin_lock(&spinlock);
	printf("main creat the spin lock thread\n");
	rc = pthread_create(&thread,NULL,spinlockThread, (int *)1);

	printf("main,wait a bit holding the spin lock\n");
	sleep(10);

	printf("main,now unlock the spin lock\n");

	rc = pthread_spin_unlock(&spinlock);
	if(rc==0)
		printf("main thread successfully unlocked\n");
	else
		printf("main thread unsuccessfully unlocked\n");

	printf("main wait for the thread to end\n");
	rc = pthread_join(thread,NULL);

	printf("main completd\n");
	return 0;
}







