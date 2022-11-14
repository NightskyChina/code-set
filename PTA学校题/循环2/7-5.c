#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, division, square=0;
    scanf("%lf %lf", &a, &b);
    division = (b - a) / 10000.0;
    for (int i = 0; i < 10000; i++)
    {
        square = square + division*pow(a+division/2.0,2);
        a+=division;
    }
    printf("%.4lf", square);
    return 0;
}