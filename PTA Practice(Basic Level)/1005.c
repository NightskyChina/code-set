#include<stdio.h>
int times[1000]={0};
int array[1000]={0};
void getTimesOfNumber_Callatz(int number,int len)
{
    int num=number;
    while (num !=1)
    {
        if (num%2==0)num = num/2;
        else num = (3*num+1)/2;
        for (int i = 0; i < len; i++)
        {
            if (num==array[i])
            {
                times[i]++;
            }
        }
    }
}
int bubble_sort(int array[],int len)
{
    int i,j,temp;
    for (i = 0; i < len; i++)
    {
        for (j = len-1; j>i; j--)
        {
            if (array[j]>array[j-1])
            {
                temp=array[j-1];\
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[1000]={0};
    int outputs[1000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        getTimesOfNumber_Callatz(array[i],n);
    }
    int len=0;
    for (int i = 0; i <n; i++)
    {
        if (times[i]==0)
        {
            outputs[len]=array[i];
            len++;
        }
    }
    bubble_sort(outputs,len);
    int isPrintSpace=0;
    for (int i = 0; i < len; i++)
    {
        if (isPrintSpace==0)
        {
            printf("%d",outputs[i]);
            isPrintSpace=1;
        }else if (isPrintSpace==1)
        {
            printf(" %d",outputs[i]);
        }
    }
}