#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<stdlib.h>

int main()
{
    int shmid;
    int *r;
    struct shmid_ds buf;
    shmid = shmget(56,250,IPC_CREAT|0644);
    printf("shmid = %d\n",shmid);
    r = shmat(shmid, NULL, 0);
    //r = shmdt((const void *)shmaddr);
    printf("address at which shared memory is started = %p\n",r);
    return 0;
}