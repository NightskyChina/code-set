#include<stdio.h>
#include<math.h>
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
int main()
{
    int n,i;
    scanf("%d",&n);
	for (i = pow(10,n-1); i < pow(10,n); i++)
		if (i==DaffodilNumberCalculationMethod(i,n))
			printf("%d\n",i);
}