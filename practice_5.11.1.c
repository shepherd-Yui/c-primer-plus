#include<stdio.h>
#define min_to_hour 60

int main()
{
	int minute = 1;
	int hour;
	int min;
	printf("����һ������-Сʱת������\n");
	printf("������һ������0����\n");
	printf("����0��ʹ����ֹͣ\n");
	printf("������ʱ�䳤��:");
	while (minute > 0)
	{
		scanf("%d", &minute);
		hour = minute / min_to_hour;
		min = minute % min_to_hour;
		printf("���������ʱ�䳤��Ϊ��%ds, һ��%dСʱ%d����", minute, hour, min);
		 
	}
	return 0; 
}
