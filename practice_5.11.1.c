#include<stdio.h>
#define min_to_hour 60

int main()
{
	int minute = 1;
	int hour;
	int min;
	printf("这是一个分钟-小时转换程序\n");
	printf("请输入一个大于0的数\n");
	printf("输入0来使程序停止\n");
	printf("请输入时间长度:");
	while (minute > 0)
	{
		scanf("%d", &minute);
		hour = minute / min_to_hour;
		min = minute % min_to_hour;
		printf("你所输入的时间长度为：%ds, 一共%d小时%d分钟", minute, hour, min);
		 
	}
	return 0; 
}
