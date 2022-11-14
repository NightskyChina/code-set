#include<stdio.h>
char turn(char c)
{
    return 155-c;
}
int main()
{
    char str[100]={'\0'};
    gets(str);
    for (int i = 0; i < 100; i++)printf("%c",(str[i]>=65&&str[i]<=90)?turn(str[i]):str[i]);
}