#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


/* Declare a buffer for user input of size 2048 */

int main(int argc, char** argv) {
    /*Print version and exit information */
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    /* Never ending loop */
    while(1) {

        /* Output our prompt */
        char * input = readline("lispy> ");

        add_history(input);

        /*Echo input back to user */
        printf("No, you're a %s!", input);

        free(input);
    }

    return 0;
}