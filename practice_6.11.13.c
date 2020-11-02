#include<stdio.h>
#include<math.h>
 
int main(int argc, char *argv[])
{
	int i, list[8];
	int j = 0;
	for (i = 0; i < 8; i++)
	{
		list[i] = pow(2, i+1);
//		printf("%d", list[i]);
	}
	do
	{
		printf("%d ", list[j]);
		j++;
	}while (j < 8);
	return 0;
}

