#include<stdio.h>

int main() {
    int i, a[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*ptr_a)[10] = &a; //pointer to array of 10 integer
    int *ptr_aa = a; //pointer to integer

    printf("Displaying data from Array (a) : \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", a[i]);
    }
    printf("\n");
    printf("Displaying data from pointer to a (ptr_a) : -- (*ptr_a)[i] \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", (*ptr_a)[i]);
    }
    printf("\n");
    printf("Displaying data from pointer to a (ptr_aa) : -- ptr_aa[i] \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", ptr_aa[i]);
    }
    printf("\n");
    printf("Displaying data from pointer to a (ptr_aa) : -- i[ptr_aa] \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", i[ptr_aa]);
    }
    printf("\n");
    printf("Displaying data from pointer to a (ptr_aa) : -- *(ptr_aa+i) \n");
    for(i=0; i<10; i++) {
        printf("-> %d ",*(ptr_aa+i));
    }
    printf("\n");
    printf("Displaying data from pointer to a (ptr_aa) : -- *ptr_aa++ \n");
    for(i=0; i<10; i++) {
        printf("-> %d ", *ptr_aa++);
    }
    printf("\n");

    return 0;
}


