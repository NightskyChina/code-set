#include<stdio.h>
int main()
{
    char ch,str[100];
    int isBlank=0;
    double space=1,word_num=0;
    while ((ch = getchar()) !='\n')
    {
        word_num+=ch!=' '?1:0;
        space+=ch==' '&&!isBlank++?1:0;
        isBlank=ch!=' '?0:1;
    }
    printf("%.2lf",word_num/space);
}
