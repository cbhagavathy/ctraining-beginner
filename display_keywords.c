/*
* Program : Printing Keywords (32 Standard Keywords, 11 non-standards keywords)
*/
#include <stdio.h>

int main()
{
    char *non_std_keywords[]= {"asm", "cdecl", "far", "huge", "interrupt", "near", "pascal", "_cs", "_ds", "_cs", "_ss"};
    char *std_keywords[]= {"auto", "break", "case", "char",
                           "const", "continue", "default", "do",
                           "double", "else", "enum", "extern",
                           "float", "for", "goto", "if", "int",
                           "long", "register", "return", "short",
                           "signed", "sizeof", "static", "struct",
                           "switch", "typedef", "union", "unsigned",
                           "void", "volatile", "while"
                          };
    int i;
    printf("Keywords (32 standard keywords) \n");
    for(i=1; i<=32; i++) {
        printf("%02d -> %-10s ", i, std_keywords[i-1]);
        i % 4 == 0 && printf("\n");
    }
    printf("|\n");
    printf("Keywords (11 non-standard keywords\n");
    for(i=1; i<=11; i++) {
        printf("%02d -> %-10s ", i, non_std_keywords[i-1]);
        i % 4 == 0 && printf("\n");
    }

    return 0;
}
