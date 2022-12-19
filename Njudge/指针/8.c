#include "stdio.h"
void fun(int a, int b, int *sum, int *diff, int *product, float *divide)
{
	*sum=a+b;
	*diff=a-b;
	*product=a*b;
	*divide=a*1.0/b;
}
void main()
{
	int i,a,b,c,d,e,*sum,*diff,*product;
    float *divide,f;
	sum=&c;
	diff=&d;
	product=&e;
	divide=&f;
	scanf("%d %d",&a,&b);
	fun(a,b,&c,&d,&e,&f);
	printf("%d %d %d %.2f",c,d,e,f);
}
