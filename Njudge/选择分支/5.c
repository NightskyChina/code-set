#include<stdio.h>
int bubble_sort(int array[],int len)
{
    int i,j,temp;
    for (i = 0; i < len; i++)
    {
        for (j = len-1; j>i; j--)
        {
            if (array[j]>array[j-1])
            {
                temp=array[j-1];\
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
    return 0;
}
int main()
{
	int num[3];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    bubble_sort(num,3);
    if ((num[0]+num[2])/2==num[1])printf("TRUE");else printf("FALSE");
}