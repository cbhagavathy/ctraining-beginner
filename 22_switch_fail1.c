#include <stdio.h>

int main()
{
    int a = 10, b  = 5, c;
    c = a + b;
    switch(c) {
        case 10: printf("b value is 0\n"); break;
        case 5: printf("a value is 0\n"); break;
        case 10+5.0: printf("Sum of a + b is 15\n"); break;
    }
    printf("Completed\n");
    return 0;
}


