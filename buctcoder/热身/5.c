#include<stdio.h>
#include<math.h>

int isPrimeNumber(int num)
{
    if(num==1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if(num%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        printf("%s\n", isPrimeNumber(temp)?"yes":"no");
    }
}