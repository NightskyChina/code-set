#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num>20&&num<80)
    {
        printf("A");
    }else if(num>=80)
    {
        printf("B");
    }else printf("NOT");
}