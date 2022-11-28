#include<stdio.h>
int fun(int number)
{
    return number>0?number*fun(number-1):1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fun(n));
}