#include<stdio.h>
#include<string.h>

int main()
{
    //ret interior pointer which point to the interior ptr and str is a starting pointer.
    const char str[] = "linuxkernel.com";
    const char ch = '.';
    char *ret;

    printf("string before chr/scan is %s \n",str);
    ret = memchr(str,ch,strlen(str));
    printf("string after **%c** is - **%s** \n ",ch,ret-1);     //ot ret+1 ot ret-8
    return 0;
}