#include<stdio.h>
 
int main(int argc, char *argv[])
{
	int i, j;
	char s = 's';
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j <= i; j++)
		{
			printf("%c",s);
		}
	printf("\n");
	}
	return 0;	
 }

