#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0,array[20][20];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d",&array[i][j]);
    for (int i = 0; i < n; i++)
        sum1 += array[i][i];
    for (int i = 0; i < n; i++)
        sum2 += array[i][n-i-1];
    printf("%d %d",sum1,sum2);
}