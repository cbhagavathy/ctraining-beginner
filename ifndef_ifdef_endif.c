#include <stdio.h>


void logMessage() {
#ifndef RELEASE
  #ifdef DEBUG
    printf("Debugging information\n");
  #elif defined(BETA)
    printf("Beta code\n");
  #else
    printf("Unknown build type\n");
  #endif
#else
  printf("Release code\n");
#endif
}

void main() {
    logMessage();
}


