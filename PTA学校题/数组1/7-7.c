#include<stdio.h>
void getMatrix(int array[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", &array[i][j]);
}
int main()
{
    int ai,aj,bi,bj;
    int arrayA[100][100];
    int arrayB[100][100];
    int arrayC[100][100]={0};
    scanf("%d %d",&ai,&aj);
    getMatrix(arrayA,ai,aj);
    scanf("%d %d",&bi,&bj);
    getMatrix(arrayB,bi,bj);
    if (aj==bi)
    {
        printf("%d %d\n",ai,bj);
        for (int i = 0; i < ai; i++)
        {
            int blank=0;
            for (int j = 0; j < bj; j++)
            {
                for (int k = 0; k < aj; k++)
                    arrayC[i][j]+=arrayA[i][k]*arrayB[k][j];
                printf("%s%d",blank++?" ":"",arrayC[i][j]);
            }
            printf("\n");
        }
    }else
        printf("Error: %d != %d",aj,bi);
}