#include <stdio.h>
void main()
{
    int a;
    char b;
    scanf("%d %c",&a,&b,5);
    int c = 1;
    int d = 1;
    while (a - c >= 0)
    {
        d = d + 2;
        c = c + d * 2;
    }
    c = c - d * 2;
    d = d - 2;
    int x = d;
    int z = d;
    for (int m = (d+1)/2; m > 0; m = m - 1)
    {
            for (int n = d-z; n > 0; n = n - 1)
            {
                printf(" ");
            }
            for (int n = x; n > 0; n = n - 1)
            {
                if (n > 1)
                {
                    printf("%c", b);
                }
                else
                {
                    printf("%c\n", b);
                    x = x - 2;
                    z = z - 1;
                }
            }
    }
    x = 3;
    z = z + 2;
    for (int m = (d-1)/2; m > 0; m = m - 1)
    {
        for (int n = d - z; n > 0; n = n - 1)
        {
            printf(" ");
        }
        for (int n = x; n>0; n = n-1)
        {
            if (n > 1)
            {
                printf("%c", b);
            }
            else
            {
                printf("%c\n",b);
                x = x + 2;
                z = z + 1;
            }
        }
    }
    printf("%d", a-c);
}