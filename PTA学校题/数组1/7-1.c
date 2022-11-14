#include<stdio.h>
int ArrayMin(int array[],int len,int boolean)
{
    int i,min=array[0],num;
    for (i = 0; i < len; i++)
    {
        if (array[i]<=min&&array[i]!=0)
        {
            min=array[i];
            num = i;
        }
    }
    if (boolean==0)return min;
    if (boolean==1)return num;
}
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
        scanf("%d",&array[i]);
    printf("%d %d",ArrayMin(array,10,0),ArrayMin(array,10,1));
}