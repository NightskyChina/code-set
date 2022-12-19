#include<stdio.h>
#include<string.h>
int main()
{
	char array[100];
	char max[100] = {0};
	for(int i=0;i<5;i++)
	{
		scanf("%s",array);
		if(strcmp(array,max)>0)
		strcpy(max,array);
	}
	printf("Max is: %s\n",max);
}