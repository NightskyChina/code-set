#include<stdio.h>
int search(int *list,int n,int x)
{
    for(int i=0;i<n;i++)
        if(list[i]==x)
            return i;
    return -1;
}
int main()
{
    int r;
    scanf("%d",&r);
    for (int i = 0; i < r; i++)
    {
        int n;
        scanf("%d",&n);
        int list[20];
        for (int j = 0; j < n; j++)
            scanf("%d",&list[j]);
        int x;
        scanf("%d",&x);
        int result = search(list,n,x);
        if(result==-1)
            printf("Not found\n");
        else printf("index = %d\n",result);
    }
}