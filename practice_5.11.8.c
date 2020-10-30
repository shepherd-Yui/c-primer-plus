#include<stdio.h>
int main(int argc, char *argv[])
{
	int number1, number2, answer;
	printf("This program computers moduli.\n");
	printf("Enter an integer to serve as the second operand:\n");
	scanf("%d", &number2);
	printf("Now enter the first operand:\n");
	scanf("%d", &number1);
	while(number1 > 0)
	{
		answer = number1 % number2;
		printf("%d" " %% " "%d is %d\n", number1, number2, answer);
		printf("Enter next number for first operand (<= 0 to quit):");
		scanf("%d",&number1);
	}
	printf("Done");
	return 0;
}
