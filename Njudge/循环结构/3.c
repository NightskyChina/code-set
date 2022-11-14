#include<stdio.h>
#include<math.h>
int maxNum(int num[][60],int m,int n)
{
    int max= 0;
    int i1,i2;
    for (i1 = 0; i1 < n; i1++)
    {
        for (i2 = 0; i2 < m; i2++)
        {
            if (num[i1][i2]>=max)
            {
                max=num[i1][i2];
            }
        }
    }
    return max;
}
int minNum(int num[][60],int m,int n)
{
    int min= maxNum(num,m,n);
    int i1,i2;
    for (i1 = 0; i1 < n; i1++)
    {
        for (i2 = 0; i2 < m; i2++)
        {
            if (num[i1][i2]<=min)
            {
                min=num[i1][i2];
            }
        }
    }
    return min;
}
int main()
{
    int m,n,i1,i2;
    int num[60][60];
    scanf("%d %d",&m,&n);
    for (i1 = 0; i1 < n; i1++)
    {
        for (i2 = 0; i2 < m; i2++)
        {
            scanf("%d",&num[i1][i2]);
        }
    }
    printf("%d",maxNum(num,m,n)-minNum(num,m,n));
    
}