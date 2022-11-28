#include<stdio.h>
int main()
{
    int n,array[1500];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", array[n-1-i]);
}