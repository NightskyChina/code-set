#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    scanf("%d %d",&m,&n);
    for(i=m; i<=n; i++)if (i%2==0)sum+=i;
    printf("%d\n",sum);
    return 0;
}