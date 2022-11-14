#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    for (int i1 = 0; i1 < n; i1++)
    {
        int character;
        for (int i2 = n-1; i2 > i1; i2--)
        {
            printf(" ");
        }
        
        for (int i2 = 0; i2 <= i1; i2++)
        {
            character='A'+i2;
            printf("%c", character);
        }
        for (int i2 = 1; i2 <= i1; i2++)
        {
            printf("%c", character-i2);
        }
        printf("\n");
    }
}