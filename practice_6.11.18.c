#include<stdio.h>
#include<math.h>
#include<string.h>
#define Dunbar 150
int main(int argc, char *argv[])
{
	int start = 5;
	int week = 1;
	do{
		printf(" No %d week %d friends\n", week, start);
		start = (start - week++) * 2;
	}while(start < Dunbar);
	return 0;
}



//int main()
//{
//	int rabnud = 5;
//	int weeks = 1;
//	while(rabnud < Dunbar)
//	{
//		printf("At %d weeks, Rabnud has %4d friends \n", weeks, rabnud);
//		rabnud = 2 * (rabnud - weeks++);
//	}
//	printf("\nDone\n");
//	return 0;
//}
//运行结果为第8周有146个朋友 

