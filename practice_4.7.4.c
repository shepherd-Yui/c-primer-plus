/*³ÌÐò¸Ä´í 
define B booboo
define X 10
main(int)
{
	int age;
	char name;
	printf("please enter your first name.");
	scanf("%s", name);
	printf("All right, %c, whats your age?\n", name);
	scanf("%f", age);
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	rerun 0;
}
*/


#include<stdio.h>
#define B "booboo"
#define X 10
int main()
{
	int age;
	char name[40];
	printf("please enter your first name.");
	scanf("%s", name);
	printf("All right, %s, whats your age?\n", name);
	scanf("%d", &age);
	int xp;
	xp = age + X;
	printf("thats a %s! you must be at least %d.\n", B, xp);
	return 0;
}
