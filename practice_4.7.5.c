#include<stdio.h>
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	//��ӡ����˫���ŵ��ַ�����Ҫ��printf�м���ת������\"
	//�ʿ�����Ϊ��printf�У�" \" " = " " " 
	//��  һ����б�ܼ�һ�����ŵ���һ������
	 
	printf("That is %.0f%% of list.\n", percent);
	//80%��Ҫ�ø��������ݣ���ӡ��Ҫ�������η� 
	//�ٷֺŵĴ�ӡ��Ҫʹ��ת��˵������%% 
	
	return 0;
}
