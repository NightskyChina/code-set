#include<stdio.h>
int main()
{
    int num=0;
    double sum=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum*(1.0-1.0/(4*i*i));
    }
    printf("%.7lf",1.0/sum*2);
    return 0;
}