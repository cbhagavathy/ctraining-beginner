#include<stdio.h>

int main() {
    struct employee {
    	int id;
    	char name[256];
    	char department_name[256];
    };

    int i, arr[10] = { [2]= 22, [6] = 66 };
    struct employee e1 = { .id = 1, .department_name = "HR", .name = "Mathan"} ;

    printf("Array Elements\n");
    for(i=0; i<10; i++)
       printf("%d\n", arr[i]);

    printf("\nEmployee Name : %s", e1.name);
    printf("\nEmployee ID : %d", e1.id);
    printf("\nEmployee Department Name : %s\n", e1.department_name);
    return 0;
}

