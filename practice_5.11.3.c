#include<stdio.h>
int main(int argc, char *argv[])
{
	const D_TO_W = 7;
	int day, week, input;
	printf("请输入一个天数:\n");
	scanf("%d", &input);
	while (input>0)
	{
		week = input / D_TO_W;
		day = input % D_TO_W;
		printf("%d天是 %d周 %d天\n", input, week, day);
		printf("输入0退出");
		scanf("%d", &input);
	}
	return 0;
}
