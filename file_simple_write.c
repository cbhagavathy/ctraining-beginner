#include <stdio.h>

int main() {
   FILE *fptr;
   char ch;
   char str[100];

   fptr = fopen("output.txt", "w");
   if (fptr == NULL) {
      printf("Error in creating file!\n");
      return 0;
   }
   printf("File created with (w mode).\n");

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   // Write the string to the file character by character
   for (int i = 0; str[i] != '\0'; i++) {
      fputc(str[i], fptr);
   }

   fclose(fptr);
   printf("String written to file.\n");
   printf("File closed.\n");

   return 0;
}
