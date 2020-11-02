#include<stdio.h>
 
int main(int argc, char *argv[])
{
	int i, j, k, temp;
	char input;
	char ch;
	printf("please input a letters:\n");
	scanf("%c", &input);
	temp = input - 'A' + 1;
	for (i = 0;i < temp; i++)
	{
		for (j = 0; j < temp - i - 1; j++)
		{
			printf(" ");
		}
		for (ch = 'A';j < temp; j++)
		{
			printf("%c", ch++);
			//此条语句在运行之后ch的值要比输入的值大1
			//所以在下面的循环中，ch的初值要减2 
		}
		for (k = 0, ch -= 2; k < i; k++ )
		{
			printf("%c", ch--);
		}
	printf("\n");
	}
	return 0;
}

