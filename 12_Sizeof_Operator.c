#include <stdio.h>

/*Used to calculate the size of the variable according to its data type.*/

int main()
{
    char A='A';
    char name[80] = "Chidhambaram";
    char *firstName = "Chidhambaram";
    
    short a = 1; 
    int b = 10; 
    float c = 20; 
    double d = 30; 
    
    long int e = 40; 
    long double f = 50;
    
    int g[10] = {1,2,3,4,5,6,7,8,9,10};
    double h[10] = {1,2,3,4,5,6,7,8,9,10};
    
    long int i[10] = {1,2,3,4,5,6,7,8,9,10};
    long double j[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Size of A : %d [Size of character]\n", sizeof(A));
    printf("Size of name : %d [Size of 80 characters]\n", sizeof(name));
    printf("Size of firstName : %d  [Size of character pointer]\n", sizeof(firstName));

    printf("Size of a : %d [Size of short ]\n", sizeof(a));
    printf("Size of b : %d [Size of integer ]\n", sizeof(b));
    printf("Size of c : %d [Size of float ]\n", sizeof(c));
    printf("Size of d : %d [Size of dobule]\n", sizeof(d));

    printf("Size of e : %d [Size of long integer ]\n", sizeof(e));
    printf("Size of f : %d [Size of long double ]\n", sizeof(f));
    printf("Size of g : %d [Size of 10 integer = 4 * 10]\n", sizeof(g));
    printf("Size of h : %d [Size of 10 double = 8 * 10]\n", sizeof(h));
    printf("Size of i : %d [Size of 10 long integer = 8 * 10]\n", sizeof(i));
    printf("Size of j : %d [Size of 10 long double = 16 * 10]\n", sizeof(j));

    return 0;
}

