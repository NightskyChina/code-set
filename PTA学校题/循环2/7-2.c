#include<stdio.h>
int main()
{
    int m,n;
    int Max_CommonDivisor=0;
    scanf("%d %d", &m, &n);
    for (int i = 1; i < 10000; i++)
    {
        if (m%i==0&&n%i==0)
        {
            Max_CommonDivisor=i;
        }
    }
    printf("%d\n", m*n/Max_CommonDivisor);
}