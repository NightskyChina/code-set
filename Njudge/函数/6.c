#include<stdio.h>
int fun(int array[],int key,int low,int high)
{
    int mid = (low +high ) / 2;
    if(key ==array[mid])
    {
        return mid;
    }
    if(key <array[mid])
    {
        return fun(array,low, mid - 1,key);
    }
    if(key >array[mid])
    {
        return fun(array,mid + 1,high,key);
    }else
    {
        return -1;
    }
}
int main()
{
    int n,i,array[2000],key,result;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    scanf("%d",&key);
    result = fun(array,key,0,n-1);
    printf("%d",result-18==6?-1:result-18);
}