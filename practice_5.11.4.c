#include<stdio.h>
int main(int argc, char *argv[])
{
	const cm_to_inches = 2.54;
	const cm_to_feets = 30.48;
	float inches, centimeters;
	int feets;
	printf("Enter a height in centimeters:");
	scanf("%f", &centimeters);
	while (centimeters > 0)
	{
		feets = centimeters / cm_to_feets;
		inches = (centimeters - feets * cm_to_feets) * cm_to_inches;
		printf("%.1f cm = %d feet, %.1f inches\n", centimeters, feets, inches);
		printf("Enter a height in centimeters (<=0 to quit): " );
		scanf("%f", &centimeters);
	}
	return 0;
}

// ����ΪC primer plus�κ��
// ��������������Ŀ��ʾ��ͬ
// ����֤Ϊ�㷨���� 
// ������ѧϰ֮���ٽ����޸� 
//{
//	const FEET_TO_CM = 30.48;
//	const INCH_TO_CM = 2.54;
//	int feet;
//	float inches, cm;
//	printf("CONVERT CM TO INCHES!\n");
//	printf("Enter the height in centimeters:");
//	scanf("%f", &cm);
//	while(cm > 0)
//	{
//		feet = cm / FEET_TO_CM;
//		inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
//		printf(" %.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
//		printf("Enter the height in centiments");
//		scanf("%f", &cm);
//	 } 
//	 printf("PROGRAM EXIT!\n");
//	 return 0;
//}

