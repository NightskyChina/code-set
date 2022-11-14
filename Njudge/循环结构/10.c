#include<stdio.h>
struct position
{
    int x[1000];
    int y[1000];
    int z[1000];
};
int ArrayMax(struct position position,int len)
{
    int i,max=0,num;
    for (i = 0; i < len; i++)
    {
        if (position.z[i]>max)
        {
            max=position.z[i];
            num=i;
        }
    }
    return num;
}
int main()
{
    int n,i;
    struct position pos;
    scanf("%d",&n);
    for ( i = 0; i < 1000; i++)
    {
        pos.z[i] =0;
    }
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d %d",&pos.x[i],&pos.y[i],&pos.z[i]);
    }
    printf("%d %d %d",pos.x[ArrayMax(pos,1000)],pos.y[ArrayMax(pos,1000)],pos.z[ArrayMax(pos,1000)]);
}