#include<stdio.h>
#include<math.h>

struct planet
{
    char name[100];
    int x,y,z,d;
}p[20];

int main(int argc, char **argv)
{
    int n,num,max,min,index,i;
    char ch;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        num = 0;
        getchar();
        while ((ch = getchar()) !=' ')
            p[i].name[num++] =ch;
        scanf("%d %d %d", &p[i].x,&p[i].y,&p[i].z);
        p[i].d = pow(p[i].x,2)+pow(p[i].y,2)+pow(p[i].z,2);
    }
    min=p[0].d;
    index=0;
    for(i=0;i<n;i++)
    {
        if (min>p[i].d)
        {
            min=p[i].d;
            index=i;
        }
    }
    printf("%s\n",p[index].name);
    max=p[0].d;
    index=0;
    for(i=0;i<n;i++)
    {
        if (max<p[i].d)
        {
            max=p[i].d;
            index=i;
        }
    }
    printf("%s\n",p[index].name);
}