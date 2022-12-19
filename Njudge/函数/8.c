#include<stdio.h>
int mystrcat(char str1[],char str2[])
{
    int i,k=0,j=0;
    while (str1[j] != '\0')
        j++;
    while (str2[k] != '\0')
        k++;
    for (i = 0; i <= k; i++)
        str1[i+k]=str2[i];
    return 0;
}
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    mystrcat(str1,str2);
    puts(str1);
}