#include<stdio.h>
#include<math.h>
int main()
{
    double a,output,n,swap;
    scanf("%lf", &a);
    n=a/2.0;
    for (int i = 0; i < 1000; i++)
    {
        swap=n;
        n=(n+a/n)/2.0;
        if (fabs(n-swap)<=0.00001)
        {
            printf("%.4lf",n);
            break;
        }
    }
}