#include <stdio.h>

/*Used to replace the if and else condition. Its also called as Ternary Operator.*/ 

int main() {
    int a, b, c, i;
    for(i=0;i<2; i++) {
        printf("\nEnter the value of a : "); scanf("%d", &a);
        printf("Enter the value of b : "); scanf("%d", &b);
        c = (a > b) ? a : b; 
        printf("|\n");
        printf("Greatest value is : %d\n", c);
        (a > b) ? printf("a is greater \n") : printf("b is greater");
        printf("Greater variable : %s", (a > b) ? "a" : "b" );
    }
    return 0;
}

