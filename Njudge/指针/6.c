#include <stdio.h>
int main()
{
    int n,i,j,sum=0;
    int arr[4][4],num[1];
    int *p=num;
    scanf("%d",&n);
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          *(*(arr+i)+j) = n++;
    printf("%d %d\n",*(*(arr+1)+1),*(*(arr+1)+2));
    printf("%d %d\n",*(*(arr+2)+1),*(*(arr+2)+2));
}