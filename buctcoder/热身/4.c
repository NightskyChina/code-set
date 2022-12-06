#include<stdio.h>
int main()
{
    int array[6][6];
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            scanf("%d", &array[i][j]);
            array[i][j] += (i==j)||(i+j==5)?10:0;
        }
    }
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            printf("% 5d%s", array[i][j],j==5?"\n":"");
}