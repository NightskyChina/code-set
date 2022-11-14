#include<stdio.h>
int main()
{
    int n,m;
    int boolean=0;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        if (2*i+(n-i)*4==m)
        {
            printf("%d %d",i,n-i);  
            boolean = 1;
        }
    }
    if (boolean==0)
    {
        printf("0 0");
    }
}