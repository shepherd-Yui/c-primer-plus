#include<stdio.h>

int Temperatures(double F);
 
int main(int argc, char *argv[])
{
	double input;
	printf("It's a degree switch programer!\n");
	printf("Please input a degree Fahrenheit:\n");
	while(scanf("%lf", &input) == 1)
	/*此处是利用scanf（）的返回值进行判断
	在scanf里需要输入的是一个double类型的数据
	如果输入了一个double类型，函数会返回1
	如果输入q或者非数字，则是char类型
	函数没有读取到double类型，只能返回0 */
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
