#include<stdio.h>

int main(void)
{
	float ages, second;
	//年龄可以为浮点数 
	int switch_ages = 3.156e7;
	printf("请输入你的年龄：");
	scanf("%f", &ages);
	second = ages * switch_ages;
	printf("你的年龄为:%.2f\n", ages);
	printf("对应的秒数为:%.0lf", second);
	
	return 0;
}

//采用预定义方法定义转换关系
/*
#include<stdio.h>
#define year_to_second 3.156e7

int main(void)
{
	float ages, second;
	printf("输入年龄");
	scanf("%f", &ages);
	second = ages * year_to_second;
	printf("你的年龄为:%.2f\n", ages);
	printf("对应的秒数为:%.0lf", second);
	
	return 0;
}
 */
