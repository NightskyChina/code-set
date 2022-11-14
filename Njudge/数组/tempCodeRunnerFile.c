#include<stdio.h>
int main()
{
    char ch,str[1200];
    int space_number=0,n=0;
    double adv;
    while ((ch = getchar()) !='\n')
    {
        str[n++] = ch;
        space_number+=ch==' '?1:0;
    }
    adv = (n-space_number+1)/(space_number+1);
    printf("%.4lf",adv);
}