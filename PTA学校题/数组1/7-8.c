#include<stdio.h>
#include<limits.h>
void getMatrix(int array[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", &array[i][j]);
}
int getMaxOfRow(int num[100][100],int row,int column)
{
    int max=num[row][0];
    for (int i = 0; i < column; i++)
        if (num[row][i]>max)
            max=num[row][i];
    return max;
}
int getMinOfColumn(int num[100][100],int row,int column)
{
    int min=INT_MAX;
    for (int i = 0; i < row; i++)
            if (num[i][column]<min)
                min=num[i][column];
    return min;
}
int main()
{
    int n,matrix[100][100];
    int max[6];
    int min[6];
    scanf("%d",&n);
    getMatrix(matrix,n,n);
    for (int i = 0; i < n; i++)
    {
        max[i]=getMaxOfRow(matrix,i,n);
        min[i]=getMinOfColumn(matrix,n,i);
    }
    int boolean =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max[i]==min[j])
            {
                printf("%d %d",i,j);
                boolean = 1;
            }
        }
    }
    if (boolean==0)
        printf("NONE");
}