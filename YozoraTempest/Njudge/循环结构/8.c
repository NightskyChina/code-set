#include<stdio.h>
#include<math.h>
int Max(int first,int second)
{
    if (first>second) return first;
    else return second;
}
int Min(int first,int second)
{
    if (first<second) return first;
    else return second;
}
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
void DivideNumber(int number,int array[],int bits)
{
	int i,singleNum;
	int n=pow(10,bits-1);
	for (i = 0; i < bits; i++)
	{
        array[i]=-1;
		singleNum = number / n;
		array[i]=singleNum;
		number = number % n;
		n = n / 10;
	}
}
int isPalindromesNumber(int number)
{
    int i,boolean=1;
    int bits = CountBitsOfNumber(number);
    int array[bits+1];
    DivideNumber(number,array,bits);
        for ( i = 0; i < bits/2; i++)
        {
            if (array[i]!=array[bits-1-i])
            {
                boolean=0;
            }
        }
    return boolean;
}
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    for ( i = Min(m,n); i <= Max(m,n); i++)
    {
        if (isPalindromesNumber(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}