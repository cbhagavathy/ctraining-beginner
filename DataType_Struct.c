#include<stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main(void) {
    struct Employee e1, e_arr[10], *ptr_e_arr = NULL;
    
    printf("Enter the employee name : "); scanf("%s", e1.name); 
    printf("Enter the employee age : "); scanf("%d", &e1.age); 
    printf("Enter the employee salary : "); scanf("%f", &e1.salary); 
    printf("|\n");
    printf("Entered Details : \n");
    printf("[ Name : %-20s   ] [ Age : %3d  ] [ Salary : %6f ]\n", e1.name, e1.age, e1.salary);
    printf("|\n");
    for(int i=0;i<3;i++) {
        printf("Enter the employee name : "); scanf("%s", e_arr[i].name); 
        printf("Enter the employee age : "); scanf("%d", &e_arr[i].age); 
        printf("Enter the employee salary : "); scanf("%f", &e_arr[i].salary); 
        printf("|\n");
    }
    for(int i=0;i<3;i++) {
        printf("Employe (1) Detail : \n");
        printf("[ Name : %-20s   ] [ Age : %3d  ] [ Salary : %6f ]\n", 
            e_arr[i].name, e_arr[i].age, e_arr[i].salary);
        printf("|\n");
    }
    
    ptr_e_arr = e_arr; 
    for(int i=0;i<3;i++) {
        printf("Employe (%d) Detail : \n", i+1);
        printf("[ Name : %-20s   ] [ Age : %3d  ] [ Salary : %6f ]\n", 
            ptr_e_arr->name, ptr_e_arr->age, ptr_e_arr->salary);
        ptr_e_arr++;
        printf("|\n");
    }
    
    return 0;
}



