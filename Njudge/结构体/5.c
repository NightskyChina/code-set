#include <stdio.h>
struct satellite
{
    float i,o,w,a,e;
}s[20];

int main()
{
    int n,i,max,min,index=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%f %f %f %f %f",&s[i].i,&s[i].o,&s[i].w,&s[i].a,&s[i].e);
    min=s[0].a;
    max=s[0].w;
    for(i=0;i<n;i++)
    {
        if (min>s[i].a)
        {
            min=s[i].a;
            index=i;
        }
    }
    printf("%.2f %.2f %.2f %.2f %.2f\n",s[index].i,s[index].o,s[index].w,s[index].a,s[index].e);
    index=0;
    for(i=0;i<n;i++)
    {
        if (max<s[i].a)
        {
            max=s[i].a;
            index=i;
        }
    }
    printf("%.2f %.2f %.2f %.2f %.2f\n",s[index].i,s[index].o,s[index].w,s[index].a,s[index].e);
}