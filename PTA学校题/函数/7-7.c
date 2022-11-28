#include<stdio.h>
#include<string.h>
int list[4]={0};
void count(char c)
{
    list[0]+=c<='z'&&c>='a'||c<='Z'&&c>='A'?1:0;
    list[1]+=c<='9'&&c>='0'?1:0;
    list[2]+=c==' '?1:0;
    list[3]+=c<='z'&&c>='a'||c<='Z'&&c>='A'||c==' '||c<='9'&&c>='0'?0:1;
}
int main()
{
    char c,str[200];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
        count(str[i]);
    for (int i =0; i < 4; i++)
        printf("% 8d",list[i]);
}