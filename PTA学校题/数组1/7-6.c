#include<stdio.h>
void ReverseOrder(int str[],int len)
{
    int temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int main()
{
    int n,blank=0;
    scanf("%d",&n);
    int array[20];
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    ReverseOrder(array,n);
    for (int i = 0; i < n; i++)
        printf("%s%d",blank++?" ":"", array[i]);
}