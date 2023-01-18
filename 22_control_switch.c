#include <stdio.h>

int main() {
  enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } day;
  day = WEDNESDAY;
  switch (day) {
    case SUNDAY:
      printf("Sunday\n");
      break;
    case MONDAY:
      printf("Monday\n");
      break;
    case TUESDAY:
      printf("Tuesday\n");
      break;
    case WEDNESDAY:
      printf("Wednesday\n");
      break;
    case THURSDAY:
      printf("Thursday\n");
      break;
    case FRIDAY:
      printf("Friday\n");
      break;
    case SATURDAY:
      printf("Saturday\n");
      break;
    default:
      printf("Invalid day\n");
  }
  return 0;
}

