#include <stdio.h>

int main() {
   FILE *fptr;
   char ch;
   char str[100];

   fptr = fopen("output.txt", "r");
   if (fptr == NULL) {
      printf("Error opening file!\n");
      return 0;
   }
   printf("File opened with (r mode).\n");

   // Read the contents of the file character by character
   ch = fgetc(fptr);
   while (ch != EOF) {
      printf("%c", ch);
      ch = fgetc(fptr);
   }

   fclose(fptr);
   printf("String read from file.\n");
   printf("File closed.\n");

   return 0;
}

