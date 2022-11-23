#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,bracket1,bracket2;
    char str[10][2000];
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%s",&str[i]);
    for (i = 0; i < n; i++)
    {
        bracket1=0;
        bracket2=0;
        for (int j = 0; j < strlen(str[i]); j++)
        {
            bracket1+=str[i][j]=='['?1:str[i][j]==']'?-1:0;
            bracket2+=str[i][j]=='('?1:str[i][j]==')'?-1:0;
            
        }
    }
}