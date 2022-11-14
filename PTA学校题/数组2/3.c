#include<stdio.h>
#include<string.h>
void ReverseOrder(char str[],int len)
{
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int main()
{
    char str[100];
    gets(str);
    ReverseOrder(str,strlen(str));
    printf("%s",str);
}