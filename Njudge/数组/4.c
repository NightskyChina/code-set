#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return ( *(int*)b - *(int*)a );
}
int main()
{
    int n,num=0,i,k,array[200]={0},score;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[num]);
        for(k=0;k<num;k++)
            array[num]=array[num]==array[k]?0:array[num];
        num++;
    }
    qsort(array,num,sizeof(array[0]),compare);
    scanf("%d",&score);
    for(i=0;i<num;i++)
        if(score==array[i])
            printf("%d",i+1);
}