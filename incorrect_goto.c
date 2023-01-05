#include <stdio.h>

int main()
{
    int a = 10; 
    printf("Value of a : %d\n", a);
    {
        int b = 5;
        printf("Value of a : %d\n", b);
    }

    printf("Value of a : %d\n", a);
    goto POS1;
    {
        int b = 5;
    POS1: 
        printf("Value of a : %d\n", b);
    }

    return 0;
}

