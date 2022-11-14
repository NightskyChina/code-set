#include<stdio.h>
int main()
{
    int array[10],num,sum=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        if (array[i]==num)
        {
            sum++;
        }
    }
    printf("%d",sum);
}