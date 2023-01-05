#include <stdio.h>

int main(void) {
	int x, y, z;
    int result; 

	printf("x = %d   y = %d   z = %d \n", x, y, z);
	result = z=x+y, y=1, x=2;
	printf("Result : %d\n", result);
	printf("x = %d   y = %d   z = %d \n", x, y, z);
	return 0;
}
