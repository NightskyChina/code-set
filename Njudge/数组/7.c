#include<stdio.h>
int main()
{
    int array1[12],array2[16],sum[12],i,num,max=0;
    for (i = 0; i <12;i++)
        scanf("%d", &array1[i]);
    for (i = 0; i <16; i++)
        array2[i] = i<2?array1[10+i]:(i>=14?array1[i-14]:array1[i-2]);
    for (i = 0; i < 12; i++)
        sum[i] = array2[i]+array2[i+1]+array2[i+2]+array2[i+3]+array2[i+4];
    for (i = 0; i < 12; i++)
        max=sum[i]>max&&(num=i)?sum[i]:max;
    printf("%d\n",num-1);
}