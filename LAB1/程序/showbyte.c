#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("./hello.c","r");
	char str[15][15];
	int i,j;
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			str[i][j]=fgetc(fp);
		}
	}
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			printf("%7c",str[i][j]);
			if(EOF==str[i][j])
			{
				goto flag1;
			}
		}
		flag1:
		printf("\n");
		for(j=0;j<15;j++)
		{
			printf("%7d",str[i][j]);
			if(EOF==str[i][j])
			{
				goto flag2;
			}
		}
		printf("\n");
	}
	flag2:
	fclose(fp);
	return 0;
}
