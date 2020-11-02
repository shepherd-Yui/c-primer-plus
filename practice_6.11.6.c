#include<stdio.h>
 
int main(int argc, char *argv[])
{
	int i, min, max, squared, cubic;
	printf("please input the min number:\n");
	scanf("%d", &min);
	printf("please input the max number:\n");
	scanf("%d", &max);
	for (i = min;i < max + 1;i++)
	{
		squared = i * i;
		cubic = i * i * i;
		printf("%6d %10d %10d\n", i, squared, cubic);
	}
	return 0;
}

