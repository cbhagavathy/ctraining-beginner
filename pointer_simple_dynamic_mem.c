#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main() {
    char *name = NULL;
    
    name = (char*)malloc(80);
    if(name != NULL) {
        printf("Memory allocated successfully !!!\n");
        strcpy(name, "Chidhambaram Bhagavathy");
        printf("Name : %s\n", name);
        free(name);
    }
    else {
        printf("Unable to allocate memory !!!");
    }

    return 0;
}
