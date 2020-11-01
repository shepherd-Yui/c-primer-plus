#include<stdio.h>
 
int main(int argc, char *argv[])
{
	int i, j;
	char list[6];
	char f = 'F';
	for (i = 0;i < 6;i++)
	{
		for(j = 0;j <= i;j++)
		{
			list[j] = f - j;
		}
		printf("%s\n", list);
	}
	return 0;	
 }

