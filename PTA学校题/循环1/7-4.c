#include<stdio.h>
int main()
{
    int n=0;
    int a=0;
    int b=0;
    int sum = 0;
    int count = 1;
    scanf("%d %d",&n, &a);
    b=a;
    for(int i=1;i<=n;i++)
    {   
        sum += a;
        count = count * 10;
        a = b * count + a;
    }
    printf("%d",sum);
    return 0;
}