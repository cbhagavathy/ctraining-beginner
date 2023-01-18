#include <stdio.h>

int main() {
   FILE *fptr;
   char ch;
   char str[100];
   long position;

   fptr = fopen("output.txt", "r+");
   if (fptr == NULL) {
      printf("Error opening file!\n");
      return 0;
   }
   printf("File opened with (r mode).\n");

   //Getting the current file pointer
   position = ftell(fptr);
   printf("Current position of the file pointer: %ld\n", position);

   // Read the contents of the file character by character
   ch = fgetc(fptr);
   while (ch != EOF) {
      printf("%c", ch);
      ch = fgetc(fptr);
   }
   
   //Move the file pointer to the end of the file 
   fseek(fptr, 0, SEEK_END);

   printf("Enter a string: "); fgets(str, 100, stdin);

   // Write the string to the file character by character
   for (int i = 0; str[i] != '\0'; i++) {
      fputc(str[i], fptr);
   }
   
   fclose(fptr);
   printf("String read from file.\n");
   printf("File closed.\n");

   return 0;
}


