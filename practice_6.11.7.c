#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[])
{
	int i, j, len;
	char input[50];
	printf("please input a word:\n");
	scanf("%s", &input);
	len = strlen(input);
	for (i = len - 1;i >= 0;i--)
	{
		printf("%c", input[i]);
	}
	return 0;
}

