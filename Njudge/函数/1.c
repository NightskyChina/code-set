#include<stdio.h>
int fun(int num)
{
    return num-1;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", fun(a));
}