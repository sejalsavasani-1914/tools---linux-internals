#include<stdio.h>
#include<string.h>

int main()
{
    char dest[]="sejalsavsani";
    const char src[] = "newstring";

    printf("before memmove dest = %s , src = %s\n",dest,src);   //memmove for coping source to destination
    memmove(dest,src,9);
    printf("after memmove dest = %s , src = %s\n",dest,src);
    return 0;
}