#include <stdio.h>

//Global Variables
int x = 5;

int main() {
	int x = 10;

	printf("Welcome to C\n");

	printf("Local x : %d\n", x);

	/*Sub block to create a separate scope
	and access global variable*/
	{
		extern int x;
		printf("Global x : %d\n", x);
	}

	return 0;
}
