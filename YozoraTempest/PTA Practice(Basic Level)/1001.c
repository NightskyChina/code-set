#include<stdio.h>
int stepsOfCallatz(int number)
{
    int num = number;
    int steps=0;
    while (num !=1)
    {
        if (num%2==0)
        {
            num = num/2;
        }else num = (3*num+1)/2;
        steps++;
    }
    return steps;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",stepsOfCallatz(n));
}