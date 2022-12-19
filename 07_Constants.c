#include <stdio.h>

/*Is a keyword used in association with declaring a variable to instruct compiler not to change or modify the value of it.*/

int main() {
	const float pi = 3.14; 
	pi = 22/7.0;
	printf("%f", pi);
	return 0;
}
