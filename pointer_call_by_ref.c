#include <stdio.h>

void sum(int a, int b, int *c) {
    *c = a + b;
    printf("==sum Function Variables==\n");
    printf("===================================================================\n");
    printf("%-10s | %-12s | %-12s | %-10s \n",
           "Var Name", "Value", "Address", "Pointing to the value");
    printf("===================================================================\n");
    printf("%-10s | %-12d | 0x%-10x |  \n", "a", a, &a);
    printf("%-10s | %-12d | 0x%-10x | \n", "b", b, &b);
    printf("%-10s | 0x%-10x | 0x%-10x | %-10d \n", "*c", c, &c, *c);
    printf("===================================================================\n");
}

int main() {
    int a = 10, b = 5, c=0;

    printf("==Main Function Variables (Before sum) ==\n");
    printf("===================================================================\n");
    printf("%-10s | %-12s | %-12s | %-10s \n",
           "Var Name", "Value", "Address", "Pointing to the value");
    printf("===================================================================\n");
    printf("%-10s | %-12d | 0x%-10x |  \n", "a", a, &a);
    printf("%-10s | %-12d | 0x%-10x | \n", "b", b, &b);
    printf("%-10s | %-12d | 0x%-10x | \n", "c", c, &c);
    printf("===================================================================\n");
    printf("|\n");
    sum(a, b, &c); 
    printf("|\n");
    printf("==Main Function Variables (After sum) ==\n");
    printf("===================================================================\n");
    printf("%-10s | %-12s | %-12s | %-10s \n",
           "Var Name", "Value", "Address", "Pointing to the value");
    printf("===================================================================\n");
    printf("%-10s | %-12d | 0x%-10x |  \n", "a", a, &a);
    printf("%-10s | %-12d | 0x%-10x | \n", "b", b, &b);
    printf("%-10s | %-12d | 0x%-10x | \n", "c", c, &c);
    printf("===================================================================\n");
    printf("|\n");
    return 0;
}

