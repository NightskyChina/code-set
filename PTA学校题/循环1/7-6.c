#include<stdio.h>//7-6 C程序设计教程与实训-循环结构-水仙花数
int count(int a)
{
	int result = 0;
	int n = 100;
	for (int i = 0; i < 3; i++)
	{
		int e = a / n;
		result += e * e * e;
		a = a % n;
		n = n / 10;
		
	}
	return result;
}
int main()
{
	int m,n;
    int num = 0;
    scanf("%d %d",&m,&n);
	for (int i = 100; i < 1000; i++)
	{
		if (i==count(i)&&i>=m&&i<=n)
		{
            num++;
		}
	}
    printf("%d\n",num);
}