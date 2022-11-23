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
    
}