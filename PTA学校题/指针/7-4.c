#include<stdio.h>
#include<string.h>
void main()
{
	char s[100], t[100];
	int m;
	int repeat, r;
	void strmcpy(char* s, char* t, int m);
	scanf("%d", &repeat);
	getchar();
	for (r = 1; r <= repeat; r++) {
		gets(t);
		scanf("%d", &m);
		getchar();
		if (strlen(t) < m)
			printf("error input");
		else {
			strmcpy(s, t, m);
			puts(s);
		}
	}
}
void strmcpy(char* s, char* t, int m)
{
	int i, j;
	j = 0;
	for (i = m - 1; t[i] != '\0'; i++)
		s[j++] = t[i];
	s[j] = '\0';
}