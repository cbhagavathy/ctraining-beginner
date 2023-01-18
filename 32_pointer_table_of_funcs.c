#include <stdio.h>
#include <stdlib.h> 

typedef void handle_events(char *event_type); 

enum {DISPLAY, STARTUP, SHUTDOWN} events; 

void display(char *msg) {
    printf("Calling function display\n");
    printf("Message : %s \n", msg);
}
void startup(char *msg) {
    printf("Calling function startup\n");
    printf("Message : %s \n", msg);
}
void shutdown(char *msg) {
    printf("Calling function shutdown\n");
    printf("Message : %s \n", msg);
}

handle_events *table_of_events[3] = {display, startup, shutdown};

int main() {
    table_of_events[STARTUP]("Starting up the program ...\n");
    table_of_events[DISPLAY]("Welcome to C Programming !!!\n");
    table_of_events[SHUTDOWN]("Shutting down the program ...\n");
    return 0;
}


