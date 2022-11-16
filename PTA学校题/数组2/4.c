#include<stdio.h>
int main()
{
    char str[100]={'\0'};
    gets(str);
    for (int i = 0; i < 100; i++)
        printf("%c",(str[i]>=65&&str[i]<=90)?155-str[i]:str[i]);
}