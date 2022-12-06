#include<stdio.h>
void getMatrix(int array[10][10], int row, int column)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", &array[i][j]);
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[10][10];
    getMatrix(array,3,3);
    for (int i =0; i < 3; i++)
        for (int j = i; j < 3; j++)
            swap(&array[i][j],&array[j][i]);
    for (int i =0; i <3; i++)
        for (int j = 0; j < 3; j++)
            printf("%d %s",array[i][j],j==2?"\n":"");
}