#include<stdio.h>
#include<math.h>
int CountBitsOfNumber(int number)
{
    int i=1,count=0;
    while (i<=number)
    {
        count++;
        i=i*10;
    }
    return count;
}
int countDiffentNumber(int number)
{
    int num[10]={0};
    int bits=CountBitsOfNumber(number),result=0;
    if(bits<4)
        num[0]++;
    for (int i = bits; i >0; i--)
    {
        num[number/(int)pow(10,i-1)]++;
        number=number%(int)pow(10,i-1);
    }
    for (int i = 0; i<10; i++)
        result+=num[i]!=0?1:0;
    return result;
}
int main()
{
    int birthyear,diffentNumber;
    scanf("%d %d",&birthyear,&diffentNumber);
    for (int i = birthyear; i <=4000 ; i++)
    {
        if (countDiffentNumber(i)==diffentNumber)
        {
            printf("%d %04d",i-birthyear,i);
            break;
        }
    }
}