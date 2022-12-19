#include <stdio.h>
#include <stdlib.h> 

/*Used for basic arithmetic operations. For example, addition, subtraction, multiplication, division. */

int main()
{
    int n_button_suresh, n_button_malar;
    int double_of_n_button_suresh, double_of_n_button_malar;
    int total_button, n_button_shared, diff, each_ones_n_button, remaining_button;

    printf("Enter the no of buttons, Malar is having : ");
    scanf("%d", &n_button_suresh);
    printf("Enter the no of buttons, Suresh is having : ");
    scanf("%d", &n_button_malar);
    printf("Enter the no of buttons to be shared to 5 people : ");
    scanf("%d", &n_button_shared);

    diff = abs(n_button_suresh - n_button_malar);
    total_button = n_button_suresh + n_button_malar;
    each_ones_n_button = total_button / n_button_shared;
    remaining_button = total_button % n_button_shared;
    double_of_n_button_suresh = n_button_suresh * 2; 
    double_of_n_button_malar = n_button_malar * 2; 

    printf("|\n|\n");
    printf("Total Buttons : %d  [Result of Addition ( + ) ]\n", total_button);
    if(n_button_malar > n_button_suresh) {
        printf("Suresh has %d buttons more than Malar [Result of Subtraction ( - ) ]\n", diff);
    } else {
        printf("Malar has %d buttons more than Suresh [Result of Subtraction ( - ) ]\n", diff);
    }
    printf("Each One Gets : %d  [Result of Division ( / ) ]\n", each_ones_n_button);
    printf("Remaining Button : %d [Result of Modulas ( % ) ]\n", remaining_button);
    printf("|\n|\n");
    printf("Double of Suresh's Buttons : %d [Result of Multiplication ( * ) ]\n", double_of_n_button_suresh);
    printf("Double of Malar's Buttons : %d [Result of Multiplication ( * ) ]\n", double_of_n_button_malar);

    return 0;
}
