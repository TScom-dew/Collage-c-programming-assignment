#include <stdio.h>
#include<string.h>
int main()
{
	// your code goes here
	char add[100];
	
	printf("Enter your home adderess: ");
	fgets(add, 100, stdin);
	//
	// removing new line 
	add[strcspn(add, "\n")]='\0';

	printf("Your home adderess: %s\n", add);
	return 0;
}
