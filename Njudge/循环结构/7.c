#include<stdio.h>
int CountPrimeNumber(int maxNum,int PrimeNumberList[],int len)
{
    int i,num,j,boolean=0;
    int count=0;
    for (i = 0; i < len-1; i++)
    {
        PrimeNumberList[i]=0;
    }
    for (num = 2; num <= maxNum; num++)
    {
        for (j = 2; j < num; j++)
        {
            if (num%j==0)boolean=1;
        }
        if (boolean==0)
        {
            count++;
            PrimeNumberList[count-1]=num;
        }
        boolean=0;
    }
    return count;
}
int main()
{
    int n,i,j,count,isBreak=0;
    int PrimeNumber[10000];
    scanf("%d",&n);
    count = CountPrimeNumber(n,PrimeNumber,10000);
    for ( i = 0; i < count; i++)
    {
        for (j = i; j < count; j++)
        {
            if (n==PrimeNumber[i]+PrimeNumber[j])
            {
                printf("%d=%d+%d\n",n,PrimeNumber[i],PrimeNumber[j]);
                isBreak=1;
                break;
            }
            if(isBreak==1)break;
        }
    }
    return 0;
}