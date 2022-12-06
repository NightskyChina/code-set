#include<stdio.h>
#include<math.h>
double fun(int a1, int b1, int a2, int b2)
{
    return (sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2)));
}
int main()
{
    int a1,b1,a2,b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    printf("%.2lf",fun(a1,b1,a2,b2));
}