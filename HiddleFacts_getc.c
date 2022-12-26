#include<stdio.h>

int main() {
    char c;

    printf("\nEnter the character (scanf) : ");
    scanf("%c", &c);
    
    printf("\nEntered character : %c - (ASCII - %d)\n\n", c, c);

    printf("======= ======= ====== \n");
    printf("\nEnter the character (getc) : ");
    c = getc(stdin);
    printf("\nEntered character : %c - (ASCII - %d)\n\n", c, c);
    
    printf("======= ======= ====== \n");
    printf("(new line \\n ASCII value : %d\n\n", '\n');
    return 0;
}

