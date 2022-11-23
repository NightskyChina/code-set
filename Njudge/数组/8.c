#include<stdio.h>
int main()
{
    int maxHight,appleHeight[10],i,num=0;
    for (i = 0; i < 10; i++)
        scanf("%d",&appleHeight[i]);
    scanf("%d",&maxHight);
    for (i = 0; i < 10; i++)
        num+=(maxHight+30)>=appleHeight[i]?1:0;
    printf("%d\n",num);
}