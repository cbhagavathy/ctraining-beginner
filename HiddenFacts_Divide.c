#include<stdio.h>

int main() {
    int a = 9, b = 2, c;
    float d = 2, e; 
    
    c = a / b; // integer divided by integer => integer 
    printf("Value of c : %d\n", c);
    c = a / d; // integer divided by float => float 
    printf("Value of c : %d\n", c);
    c = a / 2.0; // integer divided by float => float 
    printf("Value of c : %d\n", c);

    e = a / 2; // integer divided by integer => integer 
    printf("Value of e : %f\n", e);
    e = a / 2.0; // integer divided by float => float 
    printf("Value of e : %f\n", e);
    e = a / (float)2; // integer divided by float => float 
    printf("Value of e : %f\n", e);
    e = a / d; // integer divided by float => float 
    printf("Value of e : %f\n", e);
    e = a / (int)d; // integer divided by float => float 
    printf("Value of e : %f\n", e);
    
    return 0;
}

