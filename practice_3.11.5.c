#include<stdio.h>

int main(void)
{
	float ages, second;
	//�������Ϊ������ 
	int switch_ages = 3.156e7;
	printf("������������䣺");
	scanf("%f", &ages);
	second = ages * switch_ages;
	printf("�������Ϊ:%.2f\n", ages);
	printf("��Ӧ������Ϊ:%.0lf", second);
	
	return 0;
}

//����Ԥ���巽������ת����ϵ
/*
#include<stdio.h>
#define year_to_second 3.156e7

int main(void)
{
	float ages, second;
	printf("��������");
	scanf("%f", &ages);
	second = ages * year_to_second;
	printf("�������Ϊ:%.2f\n", ages);
	printf("��Ӧ������Ϊ:%.0lf", second);
	
	return 0;
}
 */
