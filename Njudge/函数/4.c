#include<stdio.h>
#include<math.h>
int fun(int arr[], int t)
{
	int max=arr[t-1],max_i=t-1,i;
	for(i=t-2;i>=0;i--)
		if(arr[i]>=max)
		{
			max=arr[i];
			max_i=i;
		}
	return max_i;
}
int main()
{
	int n,a[1000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i] = n * sin(i * 0.16);
	}
	printf("%d",fun(a,n));
	return 0;
}