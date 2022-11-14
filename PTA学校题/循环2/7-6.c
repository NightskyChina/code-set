#include<stdio.h>
#include<math.h>
double function(double x)
{
    return 2*pow(x,3)-4*pow(x,2)+3*x-6;
}
int main()
{
    double m,n,swap,root;
    scanf("%lf %lf",&m,&n);
    if (function(n)*function(m)>0)
    {
        printf("指定区间没有实数根");
    }else
    {
        while (fabs(n-m)>=1e-5)
        {
            swap=(m+n)/2.0;
            if (function(swap)*function(m)<0)
            {
                n=swap;
            }else
            {
                m=swap;
            }
        }
        printf("%.4lf",swap);
    }
}