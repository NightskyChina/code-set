#include<math.h>
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
int maxNum(int num[][60],int m,int n)
{
    int max= 0;
    int i1,i2;
    for (i1 = 0; i1 < n; i1++)
    {
        for (i2 = 0; i2 < m; i2++)
        {
            if (num[i1][i2]>=max)
            {
                max=num[i1][i2];
            }
        }
    }
    return max;
}
int minNum(int num[][60],int m,int n)
{
    int min= maxNum(num,m,n);
    int i1,i2;
    for (i1 = 0; i1 < n; i1++)
    {
        for (i2 = 0; i2 < m; i2++)
        {
            if (num[i1][i2]<=min)
            {
                min=num[i1][i2];
            }
        }
    }
    return min;
}
int DaffodilNumberCalculationMethod(int num,int bits)
{
	int i,result = 0;
	int n=pow(10,bits-1);
	for (i = 0; i < bits; i++)
	{
		int e = num / n;
		result += pow(e,bits);
		num = num % n;
		n = n / 10;
	}
	return result;
}
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
int isPalindromesNumber(int number)
{
    int boolean=1;
    for (int i = 2; i < number; i++)
    {
        if (number%i==0)boolean=0;
    }
    return boolean;
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
int SumArray(int array[],int len)
{
    int i,sum=0;
    for (i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}
int GetArrayLength(int array[],int size)
{
    return size/sizeof(array[0]);
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
void getMatrix(int array[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
}
int getMaxOfRow(int num[100][100],int row,int column)
{
    int max=num[row][0];
    for (int i = 0; i < column; i++)
    {
        if (num[row][i]>max)
        {
            max=num[row][i];
        }
    }
    return max;
}
int getMinOfColumn(int num[100][100],int row,int column)
{
    int min=10000;
    for (int i = 0; i < row; i++)
    {
            if (num[i][column]<min)
            {
                min=num[i][column];
            }
    }
    return min;
}