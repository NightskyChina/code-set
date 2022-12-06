#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str1[10][10],str2[7][10]={ {"Sunday"},
                                {"Monday"},
                                {"Tuesday"},
                                {"Wednesday"},
                                {"Thursday"},
                                {"Friday"},
                                {"Saturday"}};
    for (int i=0; i<n; i++)
        scanf("%s",str1[i]);
    for (int i=0; i<n; i++)
    {
        int boolean=0;
        for (int j=0; j<7; j++)
            if (strncmp(str1[i],str2[j],10)==0)
            {
                printf("%d\n",j+1);
                boolean=1;
            }
        if (boolean==0)
            printf("%d\n",-1);
    }
}