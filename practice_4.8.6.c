#include<stdio.h>
#include<string.h>
int main()
{
	int number1, number2;
	char ming[20], xing[20];
	printf("ÇëÊäÈëÄãµÄÃû×Ö£º\n");
	scanf("%s", ming);
	printf("ÇëÊäÈëÄãµÄĞÕ£º\n");
	scanf("%s", xing);
	number1 = strlen(xing);
	number2 = strlen(ming);
	printf("%s %s\n", xing, ming);
	printf("%*d %*d\n", number1, number1, number2, number2);
	printf("%s %s\n", xing, ming);
	printf("%-*d %-*d", number1, number1, number2, number2);
	return 0;
 } 
