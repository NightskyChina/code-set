#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int array1[20]={0};
    int *p = array1,n,i;
    for (i = 0; i <10; i++)
        scanf("%d", p+i);
    scanf("%d", &n);
    *(p+10)=n;
    qsort(p, 11, sizeof(*p),compare);
    for (i = 0; i <11; i++)
        printf("%d ", *(p+i));
}