#include<stdio.h>
int main()
{
    char str[100];
    int blanks = 0;
    while(scanf("%s",str)!=EOF)
    {
        str[0]=(str[0]>='a'&&str[0]<='z')?str[0]-32:str[0];
        printf("%s%s",blanks++?" ":"",str);
    }
}