#include<stdio.h>
int main()
{
	int x,y,t,c,d,b;
	int Y(int m,int n);
	int B(int x1,int x2,int x3);
	scanf("%d%d",&x,&y);
	if(Y>=x)
	{
		t=x;
		x=y;
		y=t;
	}
	d=Y(x,y);
	b=B(x,y,d);
	printf("最大公约数=%d\n",d);
	printf("最大公倍数=%d\n",b);
	return 0;
}
int Y(int m,int n)
{
	int w;
	w=m-n;
	while(n>w)
	{
		m=n;
		n=w;
		w=m-n;
	}
	while(n<w)
	{
		m=w;
		w=m-n;
	}
	return w;
}
int B(int x1,int x2,int x3)
{
	int p;
	p=(x1*x2)/x3;
	return p;
}
