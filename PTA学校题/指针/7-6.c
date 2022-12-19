#include "stdio.h"

void getMatrix(int array[100][100],int column,int row)
{
    for(int i=0;i<column;i++)
        for(int j=0;j<row;j++)
            scanf("%d",&array[i][j]);
}
int sumColumn(int array[100][100],int column,int row)
{
    int sum=0;
    for(int i=0;i<=row;i++)
        sum+=array[column][i];
    return sum;
}
int main()
{
    int column,row,array[100][100];
    scanf("%d %d",&column,&row);
    getMatrix(array,column,row);
    for(int i=0;i<column;i++)
        printf("%d\n",sumColumn(array,i,column));

}