#include<stdio.h>
int main()
{
	int i, number = 0;
	printf("������һ������:");
	scanf("%d", &number);
	while (i++ < 11)
	{
		printf("%d ", number++);
	}
	return 0;
}
