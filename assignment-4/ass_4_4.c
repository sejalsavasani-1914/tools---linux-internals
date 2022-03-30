/*a program, which get and set pthread scheduling policy and priority.*/

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *my(void *i)
{
    printf("I am in %d thread \n",(int *)i);
}
main()
{
    //default policy
    pthread_t tid;
    struct sched_param param;
    int priority,policy,ret;
    ret = pthread_getschedparam(pthread_self(),&policy,&param);
    printf("-----------------main thread---------------\npolicy = %d \t priority = %d\n",policy,param.sched_priority);

    //FIFO policy
    policy = SCHED_FIFO;
    param.sched_priority = 10;
    pthread_setschedparam(pthread_self(),policy,&param);
    pthread_getschedparam(pthread_self(),&policy,&param);
    printf("-----------------main thread---------------\npolicy = %d \t priority = %d\n",policy,param.sched_priority);
}