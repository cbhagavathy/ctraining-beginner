#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    char name_character_array[30]="Chidhambaram Bhagavathy";
    int numbers_integer_array[5]={1, 2, 3, 4, 5};
    char c = 'A';
    char *ptr_c = NULL;
    char *ptr_name_character_array = NULL;
    int i, a = 10;
    int *ptr_a = NULL;

    ptr_c = &c;
    ptr_a = &a;
    ptr_name_character_array = name_character_array;

    printf("name_character_array : %s\n\n", name_character_array);

    printf("Integer Array : \n");
    for(i=0; i<5; i++) {
        printf("=> %-8d ", numbers_integer_array[i]);
    }
    printf("\n");
    for(i=0; i<5; i++) {
        printf("=> %-8X ", &numbers_integer_array[i]);
    }
    printf("\n"); printf("\nc : %c\n", c); printf("ptr_c : %c\n", *ptr_c);

    printf("\n"); printf("\na : %d\n", a); printf("ptr_a : %d\n", *ptr_a);

    printf("\n"); printf("\nc : %s\n", name_character_array);
    printf("ptr_name_character_array : %s\n", ptr_name_character_array);
    
    return 0;
}

