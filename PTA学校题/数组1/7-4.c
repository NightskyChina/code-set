#include<stdio.h>
void ReverseOrder(char str[],int len)
{
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int main()
{
    char array[20];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%d",&array[i]);
    ReverseOrder(array,n);
    for (int i = 0; i < n; i++)
        printf("%d,",array[i]);
}