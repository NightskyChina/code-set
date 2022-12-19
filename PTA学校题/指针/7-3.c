#include<stdio.h>
#include<string.h>
void delchar(char str[],char c)
{
    while(*str!='\0')
    {
        if(*str!=c)
        {
            putchar(*str);
        }
        str++;
    }
}
int main()
{
    int n;
    char str[1000],ch;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        gets(str);
        scanf("%c",&ch);
        printf("result: ");
        delchar(str,ch);
    }
}