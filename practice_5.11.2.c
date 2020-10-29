#include<stdio.h>
int main()
{
	int i, number = 0;
	printf("请输入一个整数:");
	scanf("%d", &number);
	while (i++ < 11)
	{
		printf("%d ", number++);
	}
	return 0;
}
