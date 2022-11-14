#include<stdio.h>//判断三位水仙花
#include<math.h>
int DaffodilNumberCalculationMethod(int a)
{
	int result = 0;
	int n = 100;
    int i;
	for (i = 0; i < 3; i++)
	{
		int e = a / n;
		result += pow(e,3);
		a = a % n;
		n = n / 10;
	}
	return result;
}
int main()
{
	int num;
    scanf("%d",&num);
    if (num== DaffodilNumberCalculationMethod(num))printf("TRUE");
    else printf("FALSE");
}