#include <stdio.h>
#include <stdlib.h>

int main() {
  int *a[10], temp;

  for(int i=0; i<10; i++) {
      printf("Enter the value (%d) : ", i+1); 
      scanf("%d", &temp);
      a[i] = (int*) malloc (sizeof(int));
      *a[i] = temp;
  }
  printf("|\n");
  for(int i=0; i<10; i++) {
      printf("=> %d ", *a[i]);
  }
  printf("\n|\n");
  for(int i=0; i<10; i++) {
      printf("=> %d ", *(*(a + i)));
  }
  return 0;
}



