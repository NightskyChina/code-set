#include <stdio.h>

struct number
{
	int A;
	int B;
}arr[3];
void main()
{
	int i;
	for(i=0;i<2;i++)
	scanf("%d %d",&arr[i].A,&arr[i].B);
	if(arr[0].A==arr[1].A)
	printf("%d",arr[1].B);
	else
	printf("0%d%d",arr[1].A,arr[1].B);
}
