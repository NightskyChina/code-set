#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    int arr[20];
    int *p=arr,num=0;
    int i,min;

    f = fopen("file2.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }
    while(fscanf(f, "%d", &arr[num++]) != EOF)
    min=arr[0];
    for (i = 0; i < num; i++)
        min=arr[i]<min?arr[i]:min;
    printf("%d\n",min);

    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }
    return 0;
}
