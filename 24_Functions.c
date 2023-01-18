#include <stdio.h>

//Function with no arguments and no return value
//Note: Though its not accepting any input params, 
//passing arguments will not have any syntax error.
//since in C by default accepts any number of arguments of any type  
void display_hello() {
    printf("Hello\n");
}

//Function with strictly no arguments and no return value.
void display_hi(void) {
    printf("Hi\n");
} 

//Function with two arguments (integer) and no return value.
void add_and_display(int a, int b) {
    int c = a + b;
    printf("Addition of a and b : %d\n", c);
}

//Function with two arguments with integer return value
int add_and_return(int a, int b) {
    int c = a + b;
    return c;
}

int main()
{
    int c;
    display_hello();
    display_hello("world");
    display_hi();
    display_hi("Chidhambaram");
    add_and_display(10,5);
    c = add_and_return(10,5); 
    printf("c : %d\n", c);
    return 0;
}

