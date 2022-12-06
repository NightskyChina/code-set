#include<stdio.h>
#include<string.h>
void delchar(char *str,char ch)
{
    for(int i=0;i<strlen(str);i++)
        if(str[i]==ch)
            str[i]='\0';
}
int main()
{
    int r;
    char str[10][100]={0},ch;
    scanf("%d", &r);
    getchar();
    for (int i = 0; i < r; i++)
    {
        char c;
        int len=0;
        while ((c=getchar())!='\n')
            str[i][len++]=c;
        scanf("%d", &ch);
        delchar(str[i], ch);
    }
    for (int i = 0; i < r; i++)
        printf("result: %s",str[i]);
}