#include<stdio.h>
#define COVERAGE 350
int main()
{
	int sq_feet;//需要刷的面积
	int cans;//油漆的桶数 
	
	printf("Enter number of square feet to be painted:\n");
	while (scanf("%d",&sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans,
				cans ==  1 ? "can" : "cans");//老外的单复数语法
		printf("Enter next value (q to quit):\n");
	}
	return 0;
}
