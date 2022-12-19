#include <stdio.h>
int main()
{
    int n,i,j,sum=0;
    int arr[4][4];
    int *p=arr;
    scanf("%d",&n);
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          *(*(arr+i)+j) = n++;
    for(i=0;i<4;i++)
        sum += *(*(arr+i)+i);
    for(i=3;i>=0;i--)
        sum += *(*(arr+3-i)+i);
    printf("%d\n",sum);
}