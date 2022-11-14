
#include<stdio.h>
int main()
{
    int n=0;
    char str[100];
    while(scanf("%c", &str[n++]))
    {
        if (str[n-1]=='#')
        {
            n--;
            break;
        }
        if (str[n-1]<=57&&str[n-1]>=48)
        {
            n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    
}