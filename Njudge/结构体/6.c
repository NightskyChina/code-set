#include<stdio.h>
struct card
{
    char color[20];
    int length;
    int width;
    int square;
}s[30];
int main(int argc, char *argv[])
{
    int n,num,max,index,i;
    char ch;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        num = 0;
        getchar();
        while ((ch = getchar()) !=' ')
            s[i].color[num++] =ch;
        scanf("%d %d", &s[i].length,&s[i].width);
        s[i].square=s[i].width*s[i].length;
    }
    max=s[0].length;
    index=0;
    for(i=0;i<n;i++)
    {
        if (max<s[i].square)
        {
            max=s[i].square;
            index=i;
        }
    }
    printf("%s",s[index].color);
}
