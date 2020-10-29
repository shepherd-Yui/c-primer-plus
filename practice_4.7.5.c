#include<stdio.h>
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	//打印带有双引号的字符串需要在printf中加入转义序列\"
	//故可以认为在printf中，" \" " = " " " 
	//即  一个反斜杠加一个引号等于一个引号
	 
	printf("That is %.0f%% of list.\n", percent);
	//80%需要用浮点型数据，打印需要加入修饰符 
	//百分号的打印需要使用转换说明符号%% 
	
	return 0;
}
