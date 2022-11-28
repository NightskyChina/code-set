#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    int sum1=0,sum2=0;
    gets(str1);
    gets(str2);
    for (int i = 0; i <strlen(str1) ; i++)
        sum1 += str1[i];
    for (int i = 0; i <strlen(str2) ; i++)
        sum2 += str2[i];
    printf("%d\n",sum1-sum2);
}