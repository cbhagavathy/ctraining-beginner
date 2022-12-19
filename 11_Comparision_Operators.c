#include <stdio.h>

/*Used to compare the numeric values. It can be integer or decimal numbers.*/

int main()
{
    int a, b; 
    
    a = 20; b = 15; if(a > b) { printf("a greater than b\n"); }
    a = 20; b = 20; if(a >= b) { printf("a greater than or equal to a\n"); }
    a = 15; b = 20; if(a < b) { printf("a less than b\n"); }
    a = 15; b = 15; if(a <= b) { printf("a less than or equal to b\n"); }
    a = 15; b = 15; if(a == b) { printf("a equal to b\n"); }
    a = 20; b = 15; if(a != b) { printf("a not equal to b\n"); }
    
    return 0;
}

