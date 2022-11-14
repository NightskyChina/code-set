#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return ( fabs(*(int*)b) - fabs(*(int*)a) );
}
int main()
{
    int n,array[200],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    qsort(array, n, sizeof(array[0]), compare);
    for(int i=0;i<n;i++)
        printf("%d\n",array[i]);
}