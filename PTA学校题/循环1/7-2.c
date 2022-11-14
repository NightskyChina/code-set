#include<stdio.h>
int main()
{
    int num=0;
    float sum;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            sum = sum - 1.0/i;
        }else
        {
            sum = sum + 1.0/i;
        }
    }
    printf("%.2f",sum);
    return 0;
}