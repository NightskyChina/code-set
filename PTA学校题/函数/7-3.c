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
    int arr[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%ld", &arr[i]);
    for (int i = 0; i < n; i++)
        printf("%s\n",isPrimeNumber(arr[i])?"Yes":"No");
}