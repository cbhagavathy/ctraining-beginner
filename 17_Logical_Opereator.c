#include <stdio.h>

/*Used in logical decision making statements.*/

int main() {
    int a=10, b=5, c=0;
    
    if (a == 10 && b == 5) { printf("Yes, a = 10 and b = 5\n"); }
    if (a == 10 || a == 5) { printf("Yes, a = 10 or a = 5\n"); }
    printf("!c = %d\n", !c);
    
    printf("Enter the value of a : "); scanf("%d", &a);
    printf("Enter the value of b : "); scanf("%d", &b);
    printf("Enter the value of c : "); scanf("%d", &c);
    
    printf("|\n");
    if (a == 10 && b == 5) { printf("Yes, a = 10 and b = 5\n"); }
    if (a == 10 || a == 5) { printf("Yes, a = 10 or a = 5\n"); }
    printf("!c = %d", !c);
    
    return 0;
}

