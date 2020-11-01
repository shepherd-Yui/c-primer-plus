#include<stdio.h>
 
int main(int argc, char *argv[])
{
	char list[26];
	char letters;
	int number;
	for (number = 0, letters = 'a'; number < 26; number++,letters++)
		{
			list[number] = letters;
			printf("%c ", list[number]);	
		}
	return 0;	
 } 

