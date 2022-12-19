#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int*)b) - (*(int*)a);
}
void fun(int arr[],int t)
{
    qsort(arr,t,sizeof(int),compare);
}
int main()
{
    int n,i,arr[2000],blank=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    fun(arr,n);
    for(i=0;i<n;i++)
        printf("%s%d",blank++?" ":"", arr[i]);
}