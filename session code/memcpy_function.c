#include<stdio.h>
#include<string.h>

int main()
{
    const char arr1[20] = "sejalsavsani";
    const char arr2[20];

    mymemcopy(arr1,arr2,20);

    printf("string in arr2 = %s\n",arr2);

    return 0;
}

void mymemcopy(char *src,char *dest,int count)
{
    int i;
    for(i=0;i<count;i++)
    {
        *dest=*src;
        dest++;
        src++;
    }   
}