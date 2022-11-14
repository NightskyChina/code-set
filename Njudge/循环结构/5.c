#include<stdio.h>
int CountBitsOfNumber(int number)
{
    int i=1,count=0;
    while (i<=number)
    {
        count++;
        i=i*10;
    }
    return count;
}
int CountNumOfSomeNum(int num,int bits,int WhichNum)
{
	int i,result=0,b=1;
    for (i = 0; i < bits-1; i++)b*=10;
	for (i = 0; i < bits; i++)
	{
		int e=num/b;
		if(e==WhichNum)result++;
		num = num % b;
		b = b / 10;
	}
	return result;
}
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum += CountNumOfSomeNum(i,CountBitsOfNumber(i),2);
    }
    printf("%d\n",sum);
}