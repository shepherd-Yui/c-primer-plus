#include<stdio.h>

int Temperatures(double F);
 
int main(int argc, char *argv[])
{
	double input;
	printf("It's a degree switch programer!\n");
	printf("Please input a degree Fahrenheit:\n");
	while(scanf("%lf", &input) == 1)
	/*�˴�������scanf�����ķ���ֵ�����ж�
	��scanf����Ҫ�������һ��double���͵�����
	���������һ��double���ͣ������᷵��1
	�������q���߷����֣�����char����
	����û�ж�ȡ��double���ͣ�ֻ�ܷ���0 */
	{
		Temperatures(input);
		printf("Enter next degree:\n");
	}
	printf("Done");
	return 0;
}

int Temperatures(double F)
{
	double C, K;
	const double F_TO_C = 5.0 / 9.0;
	const double F_TO_K = 273.16;
	C = F_TO_C * (F - 32.0);
	K = F_TO_K + F;
	printf("%.2lf degree Fahrenheit equal %.2lf degree degree Kelvin, equal %.2lf degree Centigrade.\n", F, K, C);
	return 0;
 } 
