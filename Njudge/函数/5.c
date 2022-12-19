#include "stdio.h"
int fun(int a, int b)
{
    if(b <= a && b == 0)
        return a;
    else if(a < b)
        return fun(b, a);
    else
        return fun(b, a % b);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();
    printf("%d\n", fun(n, m));
    return 0;
}