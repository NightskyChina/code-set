#include<stdio.h>
#include<string.h>
int compare(char a[],char b[])
{
    for (int i = 0; i < 100; i++)
    {
        return a[i]>b[i]?0:1;
    }
}
int main()
{
    char str[5][100]={'\0'};
    char temp[100];
    for(int i =0;i<5;i++)scanf("%s",str[i]);
    printf("After sorted:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j>i; j--)
        {
            if (compare(str[j],str[j-1]))
            {
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(int i =0;i<5;i++)printf("%s\n",str[i]);
}