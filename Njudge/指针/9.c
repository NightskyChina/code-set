#include<stdio.h>
int search(int x[], int n, int *count)
{
    int i,max=x[0];
    for(i = 0; i < n; i++)
        max=x[i]>max?x[i]:max;
    for(i = 0; i < n; i++)
        *count+= x[i]==max?1:0;
    return max;
}
int main()
{
    int arr[1200];
    int *p=arr;
    int count=0;
    int n,max,i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", p+i);
    max = search(arr, n, &count);
    printf("%d %d\n",max,count);
}