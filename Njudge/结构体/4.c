#include<stdio.h>
struct date
{
	int year,month,day;
};
int judge(int x)
{
	if (x%400==0)
	return 1;
	else
	{
		if (x%4==0&&x%100!=0)
		{
			return 1;
		}
		else
		return 0;
	}
}
int monthcalc(int x,int y)
{
	if (y==0)
	{
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		return a[x];
	}
	if (y==1)
	{
		int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		return a[x];
	}
}
int main()
{
	struct date a[2],earlier,later;
	int i,j,k,flag,result=0,monall;
	long int compare[2];
	for (i=0;i<2;i++)
	{
		scanf("%d %d %d",&a[i].year,&a[i].month,&a[i].day);
	    compare[i]=365*a[i].year+30*a[i].month+a[i].day;
	}
	if (compare[1]>compare[0])
	{
		earlier=a[0];
		later=a[1];
	}
	else if(compare[1]<compare[0])
	{
		earlier=a[1];
		later=a[0];
	}
	else
	{
		goto end;
	}
	if (later.year>earlier.year)
{
	result+=monthcalc(earlier.month-1,judge(earlier.month))-earlier.day;
	for (i=earlier.month;i<12;i++)
	{
		flag=judge(i);
		result+=monthcalc(i,flag);
	}
	for (i=earlier.year+1;i<later.year;i++)
	{
		flag=judge(i);
		if (flag==0)
		result+=365;
		if (flag==1)
		result+=366;
	}
	for (i=0;i<later.month-1;i++)
	{
		flag=judge(i);
		result+=monthcalc(i,flag);
	}
	result+=later.day;
}
else
{
	if (later.month>earlier.month)
	{
		result+=monthcalc(earlier.month-1,judge(earlier.month))-earlier.day;
		for (i=earlier.month;i<later.month-1;i++)
		{
			flag=judge(i);
		result+=monthcalc(i,flag);
		}
		result+=later.day;
	}
	else
	{
		result=later.day-earlier.day;
	}
}
	end:printf("%d",result);
}