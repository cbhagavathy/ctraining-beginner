#include <stdio.h>

int main()
{
    int a = 10, b = 5, c;
    c = a + b;
    if(c == 15)
        printf("C is equal to %d\n", c);
    else
        printf("C is not equal to %d\n", c);

    if(c = 10)
        printf("C is equal to %d\n", c);
    else
        printf("C is not equal to %d\n", c);

    return 0;
}

