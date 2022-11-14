#include<stdio.h>
int max(int first,int second)
{
    if (first>second) return first;
    else return second;
}
int main()
{
    int a1,b1,a2,b2,length,width,swap;
    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
    if (b1>a1)
    {
        swap=a1;
        a1=b1;
        b1=swap;
    }
    if (b2>a2)
    {
        swap=a2;
        a2=b2;
        b2=swap;
    }
    length=max(a1,a2);
    width=max(b1,b2);
    printf("%d %d",length,width);
}