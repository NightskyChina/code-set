#include<stdio.h>
int isPrimeNumber(int num)
{
    for (int i = 2; i*i <= num; i++)
        if(num%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (isPrimeNumber(i)&&isPrimeNumber(n-i)&&i<=n-i)
        {
            printf("%d = %d + %d\n", n, i, n-i);
            break;
        }
    }
}