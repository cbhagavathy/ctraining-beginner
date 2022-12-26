#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 3, d;
    
    d = a + b * c;
    printf("d : %d\n", d);
    
    d = a * b + c;
    printf("d : %d\n", d);

    d = a * ++b + c;
    printf("d : %d\n", d);

    return 0;
}

