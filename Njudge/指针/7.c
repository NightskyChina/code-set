#include <stdio.h>
#include <string.h>
int main()
{
	char s[10][30];
	char *ptr[10];
	int i,j;
	char str[30];
	for(i=0;i<10;i++)
	{
		gets(s[i]);
		ptr[i]=s[i];
	}
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(strcmp(*(ptr+j),*(ptr+j+1))>0)
			{
				strcpy(str,*(ptr+j));
				strcpy(*(ptr+j),*(ptr+j+1));
				strcpy(*(ptr+j+1),str);
			}
		}
	}
	for(i=0;i<10;i++)
		puts(ptr[i]);
	return 0;
}