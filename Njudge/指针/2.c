#include<stdio.h>
#include<string.h>
int main()
{
    char str[1200];
    char *p = str;
    int sum=0,i;
    gets(p);
    for(i=0;i<strlen(p);i++)
        sum += p[i]==' '?1:0;
    printf("%d\n",sum);
}