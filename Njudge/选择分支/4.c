#include<stdio.h>
#include<math.h>
int bubble_sort(char array[],int len)
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
	char str[4];
    int i;
    scanf("%s",str);
    sort(str,4);
    printf("%s",str);
}