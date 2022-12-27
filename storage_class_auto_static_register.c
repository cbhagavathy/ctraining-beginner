#include <stdio.h>

int display() { 
    int register i;
    int auto_variable = 1; 
    static int static_counter;

    printf("[display] Value of auto_variable : %d\n", auto_variable);
    printf("[display] Value of static_counter : %d\n", static_counter);
    for(i=0; i<5; i++) {
        auto int auto_variable = 2; 
        static int static_counter=1;
        printf("[display] Value of auto_variable (in nested block) (iteration : %d) : %d\n", i, auto_variable);
        printf("[display] Value of static_counter (in nested block) (iteration : %d) : %d\n", i, static_counter++);
    }
    printf("[display] Value of auto_variable : %d\n", auto_variable);
    printf("[display] Value of static_counter : %d\n", static_counter);
    
    static_counter++;
}

int main() {
    printf("Calling function display ==> 1st\n");
    display();
    printf("|\nCalling function display ==> 2nd\n");
    display();
    return 0;
}


