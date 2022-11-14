#include<stdio.h>
#include<string.h>
int turn(char str[])
{
    for(int i;i<strlen(str);i++)
        str[i]=str[i]>=65&&str[i]<=90?str[i]+32:(str[i]>=97&&str[i<=122]?str[i]-32:str[i]);
}
int main()
{
    char str[100],ch;
    int n=0;
    while ((ch =getchar())!='#')
        str[n++]=ch;
    turn(str);
    printf("%s",str);
}