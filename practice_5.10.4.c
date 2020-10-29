//改错题

#include<stdio.h>
 
int main()
{
	int i = 1;
	float n;
	printf("watch out! here come a bunch of fractrions!\n");
	while (i < 30)
	{
		n = 1 / (float)i;
		i++;
		printf("%f\n", n);
	}
	printf("that's all, folks!\n");
	return 0;
}


/*原题
int main(void)
{
	int i = 1,
	float n;
	printf ("watch out! here come a bunch of fractrions!\n");
	while (i < 30)
		n = 1 / i;
		printf("%f", n);
	printf("that's all, folks!\n");
	return;
}
*/
