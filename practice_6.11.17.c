#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int years = 0;
	double other;
	double captial = 100;
	const double out = 10;
	const double item = 0.08;
	do{
		other = (captial + captial * item) - out;
		captial = other;
		years++;
//		printf("%lf\n", other);调试代码用 
	}while(other > 0);
	printf("After %d years.", years);
	return 0;
}


/*
int main()
{
	float chuckie = 100;
	int year = 0;
	do{
		chuckie = chuckie +chuckie * 0.08;
		chuckie -= 10;
		year++;
		printf("%f\n", chuckie);
	}while(chuckie > 9);
	printf("%d years later. Chuckie's account %f \n", year, chuckie);
	printf("%d years later. Chuckie's account is null \n", ++year);
	printf("\nDone\n");
	return 0;
}
//习题答案为21年后全部取完 
*/
