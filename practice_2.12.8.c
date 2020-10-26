#include<stdio.h>
//c primer plus 2.12.8

int one_three(void);
int two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	return 0;
}

int one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int two(void)
{
	printf("two\n");
	return 0;
}
