#include<stdio.h>
int main()
{
    int n,m,i1,i2;
    scanf("%d %d",&n,&m);
    for (i1=0; i1 < n; i1++)
    {
        for (i2 = 0; i2 <= i1; i2++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
}