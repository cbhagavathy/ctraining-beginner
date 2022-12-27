#include <stdio.h> 

enum rgb_colors { RED, GREEN, BLUE };
enum days {SUNDAY=100, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY}; 
enum random_values {A=1, B, C, D, E=100, F, G, H, I=50, J, K }; 

int main() {
    enum rgb_colors r_color = RED;
    enum rgb_colors g_color = GREEN;
    enum rgb_colors b_color = BLUE;
    
    enum days cur_day; 
    
    enum random_values ran_value = B;
    
    printf("RGB Color => R ( %d ) - G ( %d ) - B ( %d )\n", r_color, g_color, b_color);
    printf("Days List =>\n");
    cur_day = SUNDAY; printf("Sunday : %d\n", cur_day);
    cur_day = MONDAY; printf("Sunday : %d\n", cur_day);
    cur_day = TUESDAY; printf("Sunday : %d\n", cur_day);
    cur_day = WEDNESDAY; printf("Sunday : %d\n", cur_day);
    cur_day = THURSDAY; printf("Sunday : %d\n", cur_day);
    cur_day = FRIDAY; printf("Sunday : %d\n", cur_day);
    cur_day = SATURDAY; printf("Sunday : %d\n", cur_day);
    
    printf("Random Values List =>\n");
    printf("B : %d\n", ran_value);
    ran_value = A; printf("A : %d\n", ran_value);
    ran_value = B; printf("B : %d\n", ran_value);
    ran_value = C; printf("C : %d\n", ran_value);
    ran_value = D; printf("D : %d\n", ran_value);
    ran_value = E; printf("E : %d\n", ran_value);
    ran_value = F; printf("F : %d\n", ran_value);
    ran_value = G; printf("G : %d\n", ran_value);
    ran_value = H; printf("H : %d\n", ran_value);
    ran_value = I; printf("I : %d\n", ran_value);
    ran_value = J; printf("J : %d\n", ran_value);
    ran_value = K; printf("K : %d\n", ran_value);
}
