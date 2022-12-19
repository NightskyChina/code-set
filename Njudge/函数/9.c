#include<stdio.h>
#include<string.h>
int s_count(char str[])
{
    int i;
    int a=0,b=0,c=0,d=0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >='a'&& str[i]<='z'|| str[i]>='A'&& str[i]<='Z')
            a++;
        else if (str[i] >='0'&& str[i]<='9')
            b++;
        else if (str[i] == ' ')
            c++;
        else d++;
    }
    printf("%d %d %d %d", a, b, c, d);
}

int main()
{
    char str[2000];
    gets(str);
    s_count(str);
}