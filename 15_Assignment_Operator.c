#include <stdio.h>

/*Used to assign the value to the variable.*/

void print_binary();
void convert2bin(int n);
int g[4], na; 
struct A { unsigned int a : 4; unsigned int b : 4; unsigned int c : 4;} A = {3,5,7};

int main() {
    int a=3, b=5, c; 
    c = 10; printf("c : %d   => c = 10\n", c); 
    a += 10; printf("a : %d   => a = a + 10 \n", a); 
    b -= 2; printf("b : %d    => b = b - 2\n", b); 
    c *= 10; printf("c : %d  => c = c * 10\n", c); 
    c /= 4; printf("c : %d   => c = c / 4\n", c); 
    a %= 10; printf("a : %d   => a = a % 10\n", a); 
    
    printf("|\n");
    printf("[ 2 : "); convert2bin(2); printf(" ] - [ ");
    printf("A.a : %d : ", A.a); convert2bin(A.a); printf(" ] - [ ");
    printf("A.b : %d : ", A.b); convert2bin(A.b); printf(" ] - [ ");
    printf("A.c : %d : ", A.c); convert2bin(A.c); printf(" ] \n");
    printf("|\n");
    A.a &= 2; printf("A.a : ", A.a); convert2bin(A.a); printf(" => A.a = A.a & 2\n"); 
    A.b |= 2; printf("A.b : ", A.b); convert2bin(A.b); printf(" => A.b = A.b | 2\n"); 
    A.c ^= 2; printf("A.c : ", A.c); convert2bin(A.c); printf(" => A.c = A.c ^ 2\n"); 
    A.a <<= 1; printf("A.a : ", A.a); convert2bin(A.a); printf(" => A.a = A.a << 1\n"); 
    A.b <<= 1; printf("A.b : ", A.b); convert2bin(A.b); printf(" => A.b = A.b << 1\n"); 
    A.a >>= 1; printf("A.a : ", A.a); convert2bin(A.a); printf(" => A.a = A.a >> 1\n"); 
    A.b >>= 1; printf("A.b : ", A.b); convert2bin(A.b); printf(" => A.b = A.b >> 1\n"); 

    return 0;
}

//print the binary number
void print_binary() { for(na=3;na>=0;na--) printf("%d",g[na]);}

//Convert the integer to binary 
void convert2bin(int n) {
    for(na=0; na<4; na++) g[na]=0; for(na=0; n>0; na++, n=n/2) g[na]=n%2;
    print_binary();
}
