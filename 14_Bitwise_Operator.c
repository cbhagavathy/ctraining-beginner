#include <stdio.h>

/*Used to do bitwise operations like AND, OR, XOR, NOT, left shift, right shift.*/

void print_binary();
void convert2bin(int n);

int g[4], na; 
struct A { unsigned int a : 4; unsigned int b : 4; unsigned int c : 4;} A = {3,5};

int main() {
    printf("%d : ", A.a); convert2bin(A.a); 
    printf("%d : ", A.b); convert2bin(A.b); 
    printf("%d & %d : ", A.a, A.b); A.c = A.a & A.b; convert2bin(A.c); 
    printf("%d | %d : ", A.a, A.b); A.c = A.a | A.b; convert2bin(A.c); 
    printf("%d ^ %d : ", A.a, A.b); A.c = A.a ^ A.b; convert2bin(A.c); 
    printf("~%d : ", A.a); A.a = ~A.a; convert2bin(A.a); 
    printf("~%d : ", A.b); A.b = ~A.b; convert2bin(A.b); 
    printf("%d >> 1 : ", A.a); A.a = A.a>>1; convert2bin(A.a); 
    printf("%d >> 1 : ", A.b); A.b = A.b>>1; convert2bin(A.b); 
    printf("%d << 1 : ", A.a); A.a = A.a<<1; convert2bin(A.a); 
    printf("%d << 1 : ", A.b); A.b = A.b<<1; convert2bin(A.b); 
    return 0;
}

//print the binary number
void print_binary() { 
    for(na=3;na>=0;na--) printf("%d",g[na]);    
    printf("\n");        
}

//Convert the integer to binary 
void convert2bin(int n) {
    for(na=0; na<4; na++) g[na]=0;
    for(na=0; n>0; na++, n=n/2) g[na]=n%2;
    print_binary();
}




