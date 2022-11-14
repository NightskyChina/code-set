#include<stdio.h>
int array[1100]={0},len=0,isA2=0;
int countA1()
{
    int sum=0;
    for (int i = 0; i < len; i++)
        sum+=array[i]%5==0&&array[i]%2==0?array[i]:0;
    return sum;
}

int countA2()
{
    int sum=0,isPlus=1;
    for (int i = 0; i < len; i++)
        sum+=array[i]%5==1&&++isA2?(isPlus++%2==0?-array[i]:array[i]):0;
    return sum;
}
int countA3()
{
    int count=0;
    for (int i = 0; i < len; i++)
        count+=array[i]%5==2?1:0;
    return count;
}
double countA4()
{
    double sum=0,count=0;
    for (int i = 0; i < len; i++)
    {
        count+=array[i]%5==3?1:0;
        sum+=array[i]%5==3?array[i]:0;
    }
    return sum?sum/count:0;
}
int countA5()
{
    int max =0;
    for (int i = 0; i < len; i++)
        max=array[i]%5==4&&array[i]>max?array[i]:max;
    return max;
}
int main()
{
    char str1[100],str2[100],str3[100],str4[100],str5[100];
    scanf("%d",&len);
    for (int i = 0; i < len; i++)
        scanf("%d",&array[i]);
    sprintf(str1,"%d",countA1());
    sprintf(str2,"%d",countA2());
    sprintf(str3,"%d",countA3());
    sprintf(str4,"%.1lf",countA4());
    sprintf(str5,"%d",countA5());
    printf("%s %s %s %s %s",countA1()?str1:"N",isA2?str2:"N",countA3()?str3:"N",countA4()?str4:"N",countA5()?str5:"N");
}