#include<stdio.h>
#include<string.h>
int main()
{
    char n,ch,str[100];
    int times[256]={0};
    while ((ch =getchar())!='\n')
        str[n++]=ch;
    for (int i = 0; i < strlen(str); i++)
        times[str[i]]++;
    scanf("%c",&n);
    printf("%d",times[n]);
}