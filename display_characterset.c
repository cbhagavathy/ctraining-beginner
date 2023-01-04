/*
* Program : Printing Character Set 
*/
#include <stdio.h>

int main()
{
    int i;
    printf("Alphabets [UPPER case]\n");
    for(i=65; i<65+26; i++) { 
        printf("%c ", i);
    }
    printf("\n|\n");
    printf("Alphabets [lower case]\n");
    for(i=97; i<97+26; i++) { 
        printf("%c ", i);
    }
    printf("\n|\n");
    printf("Digits\n");
    for(i=0; i<10; i++) { 
        printf("%i ", i);
    }
    printf("\n|\n");
    printf("Special Characters\n");
    for(i=33; printf("%c ", i), i<48; i++);
    for(i=58; printf("%c ", i), i<65; i++); 
    for(i=91; printf("%c ", i), i<97; i++);
    for(i=123; printf("%c ", i), i<127; i++);

    return 0;
}

