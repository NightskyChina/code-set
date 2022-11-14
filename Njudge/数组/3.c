#include<stdio.h>
int main()
{
    int n,i,sum=0,array[1500]={0},count=0;
    double adv;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    adv=(double)sum/n;
    for(i=0;i<n;i++)
        count += array[i]<adv?1:0;
    printf("%d\n",count);
}