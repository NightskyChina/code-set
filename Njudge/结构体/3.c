#include <stdio.h>
struct ip
{
	int x;
	int y;
	int z;
	int m;
}s[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	scanf("%d.%d.%d.%d",&s[i].x,&s[i].y,&s[i].z,&s[i].m);
	if(s[0].x==s[1].x&&s[0].y==s[1].y)
	printf("TRUE");
	else
	printf("FALSE");
}