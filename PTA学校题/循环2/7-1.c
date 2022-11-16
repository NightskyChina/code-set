#include<stdio.h>
int main()
{
    int m,n;
    int count =0;
    int boolean=1;
    scanf("%d %d",&m,&n);
    for(int i=2;i<=1000;i++)
    {
        for (int n = 2; n < i; n++)
        {
            if (i%n == 0)
            {
                boolean =0;
                break;
            }
        }
        if (boolean == 1&&i<=n&&i>=m)
        {
            printf("%d\n",i);
            count++;
        }
        boolean =1;
    }
    printf("%d\n",count);
    return 0;
}