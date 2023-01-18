#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char program_name[30];
static float percentage = 25.0;

int max_no = 100;
static int g_counter = 0;

void display(char *name) {
    static int counter; 
    static int icounter=10; 
    int local = 10; 
    
	printf("\nProgram name : %s\n", program_name);
	printf("\nname : %s\n", name);
	printf("\ng_counter : %d\n", g_counter);
	printf("\nmax_no : %d\n", max_no);
	printf("\npercentage : %f\n", percentage);
}

int main(int argc, char *argv[]) {
	int size = 20;
	char *name = NULL;
	static int counter;
	
	name = (char*)malloc(size);
	strcpy(program_name, argv[0]);
	g_counter = 1;
	counter++;

    display(name);
    
	return 0;
}



