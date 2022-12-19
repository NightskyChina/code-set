#include<stdio.h>
#include<math.h>
int main()
{
    int arr[1200];
    int *p =arr;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        *(p+i) = 600 * cos(i * 0.35);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
}