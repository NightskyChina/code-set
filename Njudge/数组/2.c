#include <stdio.h>
int main()
{
    int n, i, array[1500], blank = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (i = n - 1; i >= 0; i--)
        printf("%s%d", blank++ ? " " : "", array[i]);
}