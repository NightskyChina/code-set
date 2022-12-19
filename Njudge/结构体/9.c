#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    int arr[50]={0};
    int num=0;
    int i,sum=0;
    int e=0;
    int fail=0;

    f = fopen("file3.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }

    while(fscanf(f, "%d", &arr[num]) != EOF)
        num++;
    for(i=0;i<num;i++)
    {
        sum+=arr[i];
        e+=arr[i]>=90?1:0;
        fail+=arr[i]<60?1:0;
    }
    printf("%.2f %d %d\n",(float)sum/30,e,fail);

    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }
    return 0;
}
