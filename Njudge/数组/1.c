#include<stdio.h>
int ArrayMin(int array[],int len)
{
    int i,min=array[0];
    for (i = 0; i < len; i++)
        if (array[i]<=min&&array[i]!=0)
            min=array[i];
    return min;
}
int main()
{
    int n,array[1500]={0},i,min,blank;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d",&array[i]);
    min = ArrayMin(array,n);
    for (i = 0; i < n; i++)
        printf("%s%d",blank++?" ":"",array[i]-min);
}