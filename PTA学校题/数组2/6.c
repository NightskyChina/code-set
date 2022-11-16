#include<stdio.h>
int main()
{
    char str[100],ch;
    int n=0;
    while ((ch =getchar())!='#')
    {
        str[n]=ch;
        str[n]=str[n]>=65&&str[n]<=90?str[n]+32:(str[n]>=97&&str[n]<=122?str[n]-32:str[n]);
        n++;
    }
    printf("%s",str);
}