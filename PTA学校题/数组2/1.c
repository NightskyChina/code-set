#include <stdio.h>
int getYangHuiTriangle(int arr[],int rows)
{
    int sum=0;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = i; j-2 > 0; j--)
            arr[sum+j-2]=arr[sum+j-2-i]+arr[sum+j-1-i];
        sum+=i;
    }
    return sum;
}
int CountBitsOfNumber(int number)
{
    int i=1,count=0;
    while (i<=number)
    {
        count++;
        i=i*10;
    }
    return count;
}
int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<100;i++)arr[i]=1;
    getYangHuiTriangle(arr,n);
    int s=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i;j++) printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%4d",arr[s++]);
        printf("\n");
    }
}