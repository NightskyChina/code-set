#include<stdio.h>
int main()
{
    char str[1200]={0};
    char *p = str;
    int sum=0,i;
    gets(p);
    for(i=0;i<=999;i++)
    {
        if(*(p+i)=='\0')
            break;
        sum++;
    }
    printf("%d\n",sum);
}