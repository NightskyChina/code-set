#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//(x+1)*(y+1)-1=K
int isInteger(double x)
{
    if(fabs(x-(int)x)<1e-8)
        return 1;
    else return 0;
}
int main()
{
    int prime;
    int list[10000]={0};
    double num=0;
    scanf("%d", &prime);
    for (int x = prime; x >=1; x--)
    {
        double temp =(double)(prime+x^2)/(double)(x+1);
        if(isInteger(temp));
        {
            num=temp;
            break;
        }
    }
    printf("%d\n",num);
    return 0;
}