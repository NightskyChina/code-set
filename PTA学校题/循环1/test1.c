#include<stdio.h>
#include<math.h>
int maxNum(int num[][60],int m,int n)
{
    int max= 0;
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int i2 = 0; i2 < m; i2++)
        {
            if (num[i1][i2]>=max)
            {
                max=num[i1][i2];
            }
        }
    }
    return max;
}
int main()
{
    int m,n;
    int num[60][60];
    scanf("%d %d",&m,&n);
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int i2 = 0; i2 < m; i2++)
        {
            scanf("%d",&num[i1][i2]);
        }
    }
    printf("%d",maxNum(num,m,n));
    
}