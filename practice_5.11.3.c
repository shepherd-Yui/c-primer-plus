#include<stdio.h>
int main(int argc, char *argv[])
{
	const D_TO_W = 7;
	int day, week, input;
	printf("������һ������:\n");
	scanf("%d", &input);
	while (input>0)
	{
		week = input / D_TO_W;
		day = input % D_TO_W;
		printf("%d���� %d�� %d��\n", input, week, day);
		printf("����0�˳�");
		scanf("%d", &input);
	}
	return 0;
}
