#include <stdio.h>

int main() {
   FILE *fptr;
   int num1=500, num2=200, r_num1, r_num2;
   char str[100]="Credentia_Automation_Technologies_LLP", r_str[100];


   // Print the data read from the file
   printf("num1 = %d, num2 = %d, str = %s\n", num1, num2, str);

   fptr = fopen("output.txt", "w");
   if (fptr == NULL) {
      printf("Error opening file!\n");
      return 0;
   }

   // Write formatted data to the file
   fprintf(fptr, "num1 = %d, num2 = %d, str = %s\n", num1, num2, str);

   fclose(fptr);
   printf("|\n");
   printf("Formatted data written to file.\n");

   fptr = fopen("output.txt", "r");
   if (fptr == NULL) {
      printf("Error opening file!\n");
      return 0;
   }

   // Read formatted data from the file
   fscanf(fptr, "num1 = %d, num2 = %d, str = %s\n", &r_num1, &r_num2, r_str);
   fclose(fptr);

   printf("r_num1 = %d, r_num2 = %d, r_str = %s\n", r_num1, r_num2, r_str);

   return 0;
}


