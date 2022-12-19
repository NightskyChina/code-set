#include<stdio.h>
#include<stdlib.h>
int m,n;
int find(int **a,int M,int N)
{
	int i,j,max=0;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				m=i;
				n=j;
			}
	return max;
}

int main()
{
	int i,j,M,N;
	int **num;
	scanf("%d%d",&M,&N);
	num=(int**)malloc(M*sizeof(int*));
	for(i=0;i<M;i++)
		num[i]=(int*)malloc(N*sizeof(int));
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&num[i][j]);
	printf("%d ",find(num,M,N));
	printf("%d %d",m+1,n+1);
	return 0;
}