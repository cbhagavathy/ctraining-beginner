#include <stdio.h>

int main()
{
    int a = 10, b = 5; 
    int *ptr_a = &a; 
    int *ptr_b = NULL; 
    
    ptr_b = &b; 
    
    printf("===================================================\n");
    printf("%-15s | %-12s | %-10s \n", "VariableName", "Value", "Address");
    printf("===================================================\n");
    printf("%-15s | %-12d | 0x%-10x \n", "a", a, &a);
    printf("%-15s | %-12d | 0x%-10x \n", "b", b, &b);
    printf("%-15s | 0x%-10x | 0x%-10x \n", "ptr_a", ptr_a, &ptr_a);
    printf("%-15s | 0x%-10x | 0x%-10x \n", "ptr_b", ptr_b, &ptr_b);
    printf("===================================================\n");

    return 0;
}

