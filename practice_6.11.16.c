#include<stdio.h>
#include<math.h>
#include<string.h>
#define capital 100.00
 
int main(int argc, char *argv[])
{
	double Daphne, Deirdre = 0;
	int i = 1;
	do
	{
		Daphne = capital * (1 + i * 0.1);
		Deirdre = capital * pow((1 + 0.05), i);
		i++;
	}while (Deirdre < Daphne);
	printf("%.2lf %.2lf %d", Deirdre, Daphne, i-1);
	return 0;
}
// �������ʵ�����Ҫ�����꣬�����ǵڼ���
// ����ǵڼ��꣬���ӡΪ��i��
// ��Ҫ����Ļ�����i-1�� 


/*����Ϊc primer plus �еĽ�𣬴�Ϊ27�� 
int main()
{
	float daphne, deirdre;
	daphne = deirdre = 100.0;
	int year = 0;
	do
	{
		daphne = daphne + 100*0.1;
		deirdre = deirdre + deirdre * 0.05;
		year++;
	}while((deirdre - daphne) < 0);
	printf("%d years later.\nDaphne = %f.\nDeirdre = %f \n", year, daphne, deirdre);
	return 0;
}
*/
