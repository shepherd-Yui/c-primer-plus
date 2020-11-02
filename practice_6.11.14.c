#include<stdio.h>
#include<math.h>
 
int main(int argc, char *argv[])
{
	double sum, list_1[8], list_2[8];
	double start = 0.0;
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("Please input NO.%d number\n", i+1);
		scanf("%lf", &list_1[i]);
	}
	for (i = 0; i< 8; i++)
	{
		sum = list_1[i];
		start += sum;
		list_2[i] = start;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%6.2lf", list_1[i]);
	}
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		printf("%6.2lf", list_2[i]);
	}
	return 0;
}

