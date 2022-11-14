#include<stdio.h>
int ArrayMin(int array[],int len)
{
    int i,min=array[0],num;
    for (i = 0; i < len; i++)
    {
        if (array[i]<=min&&array[i]!=0)
        {
            min=array[i];
            num=i;
        }
    }
    return min;
}
int GetArrayLength(int array[],int size)
{
    return size/sizeof(array[0]);
}
int SumArray(int array[],int len)
{
    int i,sum=0;
    for (i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}
int main()
{
    int n,i;
    int array[1000];
    int len;
    for ( i = 0; i < 1000; i++)
    {
        array[i]=0;
    }
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    len =GetArrayLength(array,sizeof(array));
    printf("%d",SumArray(array,len)- ArrayMin(array,len));
}