#include<stdio.h>
int fun(int arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
int main()
{
    int n,array[2000],i;

    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &array[i]);
    printf("%d\n",fun(array,n));
}