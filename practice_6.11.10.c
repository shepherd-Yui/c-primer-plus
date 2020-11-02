#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[])
{
	int i, min, max, square;
	int sum = 0;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d", &min, &max);
	while (min < max)
	{
		for(i = min; i < max + 1; i++)
		{
			square = i * i;
			sum += square;
		 }
		 printf("The sums of the squares from %d to %d is %d\n", min, max, sum);
		 sum = 0;
		 printf("Enter next set of limits:");
		 scanf("%d %d", &min, &max);
	}
	printf("Done");
	return 0;
}

