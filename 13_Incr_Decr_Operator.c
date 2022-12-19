#include <stdio.h>

/*Used to increment and decrement the numeric value by 1. If we use this operator before the variable its called prefix, after the variable then its called postfix.*/ 

int main()
{
    char A = 'A';
    int a = 10; 
    float b = 20; 

    printf("A : %d, a : %d, b : %f\n", A, a, b);
    A++; a++; b++; 
    printf("A : %d, a : %d, b : %f\n", A, a, b);
    A--; a--; b--; 
    printf("A : %d, a : %d, b : %f\n", A, a, b);

    printf("A : %d, a : %d, b : %f\n", ++A, ++a, ++b);
    printf("A : %d, a : %d, b : %f\n", --A, --a, --b);

    return 0;
}

