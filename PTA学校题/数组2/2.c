#include<stdio.h>
#include<stdlib.h>
int compareFunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    int n,array[10]={0},blank=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)scanf("%d", &array[i]);
    qsort(array, n, sizeof(int), compareFunc);
    for (int i = 0; i < n; i++)printf("%s%d",blank++?" ":"", array[i]);
}