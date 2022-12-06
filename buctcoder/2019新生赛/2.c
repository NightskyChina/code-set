#include<stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    int count4=0;
    while(count4*4<=money)
    {
        if(count4*4==money)
        {
            printf("0 0 %d\n",count4);
            return 0;
        }
        count4++;
    }
    count4--;
    switch (money-count4*4)
    {
    case 1:
        printf("0 1 %d",count4-1);
        break;
    case 2:
        printf("1 0 %d",count4-1);
        break;
    case 3:
        printf("1 1 %d",count4-2);
        break;
    }
}