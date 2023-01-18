#include <stdio.h> 

int main() {
    char *alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr_alphabets = NULL;
    
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr_array = NULL;
    
    ptr_alphabets = alphabets; 
    for(int i=1; i<=26; i++) {
        printf("%c => 0x%x  ", *ptr_alphabets, ptr_alphabets);
        if(i%4 == 0) printf("\n");
        ptr_alphabets++;
    }
    printf("\n|\n");
    ptr_array = array;
    for(int i=0; i<10; i++) {
        printf("%d => 0x%x\n", *ptr_array, ptr_array);
        ptr_array++;
    }
    return 0;
}


