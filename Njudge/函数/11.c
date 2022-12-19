#include <stdio.h>
#include <stdlib.h>
void ReadArticle(FILE *f)
{
    int i,k=-1000,a[2000],j=0;
    while (~fscanf(f,"%d",&i))
    {
        a[j]=i;
        if(j>0&&k<a[j])
            k=a[j];
        j++;
    }
    for(i=1;i<a[0];i++)
    {
        a[i]-=k;
    }
    for(i=1;i<a[0];i++)
    {
        if(i==1)
            printf("%d",a[i]);
        else
            printf(" %d",a[i]);
    }
}
int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }
    ReadArticle(f);
    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }
    return 0;
}
