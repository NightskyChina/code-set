#include<stdio.h>
#include<math.h>
int array[2000][2]={{0}};
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        array[i][1]=0;
        scanf("%d", &array[i][0]);
        int bits=1;
        for (int j=10; j<=array[i][0]; j*=10)
            bits++;
        //printf("%d\n", bits);
        int num=array[i][0];
        for (int j=bits-1; j>=0; j--)
        {
            //printf("%d\n", num);
            array[i][1]+=num/(int)pow(10,j);
            //printf("%d\n",array[i][1]);
            num=num%(int)pow(10,j);

        }
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j>i; j--)
        {
            if (array[j][1]<array[j-1][1])
            {
                swap(&array[j][0],&array[j-1][0]);
                swap(&array[j][1],&array[j-1][1]);
            }
            if (array[j][1]==array[j-1][1])
                if (array[j][0]<array[j-1][0])
                    swap(&array[j][0],&array[j-1][0]);
        }
    }
    int blank=0;
    for (int i = 0; i < n; i++)
        printf("%s%d%s",blank++?" ":"",array[i][0],i==n-1?"\n":"");
}