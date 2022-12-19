#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    int arr[20];
    int array[20][20];
    int *p=arr,num=0;
    int i,sum1=0,sum2=0,sum3=0;

    f = fopen("file2.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }
    while(fscanf(f, "%d %d %d", &array[num][0],&array[num][1],&array[num][2] ) != EOF)
        num++;
    for(i=0;i<num;i++)
    {
        sum1+=array[i][0];
        sum2+=array[i][1];
        sum3+=array[i][2];
    }
    printf("%.1f %.1f %.1f",(float)sum1/5,(float)sum2/5,(float)sum3/5);
    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }
    return 0;
}
