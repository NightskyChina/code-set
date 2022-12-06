#include<stdio.h>
int main()
{
    long long n;
    long long sum=0;
    long long temp;
    scanf("%ld", &n);
    for (int i=0; i<n-1; i++)
    {
        scanf("%ld",&temp);
        sum+=temp;
    }
    printf("%ld",(n*(n+1))/2-sum);
    return 0;
}