#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *proc(void *param)
{
    sleep(3);
    return 0;
}

int main()
{
    pthread_attr_t attr;
    pthread_t id;
    int err,info;

    pthread_attr_init(&attr);
    pthread_attr_getinheritsched(&attr,&info);
    switch(info)
    {
        case PTHREAD_INHERIT_SCHED:
            printf("SCED from its parent thread\n");
            break;
        case PTHREAD_EXPLICIT_SCHED:
            printf("EXPLICIT defining own schedular policy and priority\n");
            break;
    }
    pthread_create(&id,&attr,proc,NULL);
    return 0;
}