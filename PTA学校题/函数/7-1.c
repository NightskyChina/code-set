#include<stdio.h>
double fact(int n)
{
    if (n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    double result = n==m?1:fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf\n",result);
}