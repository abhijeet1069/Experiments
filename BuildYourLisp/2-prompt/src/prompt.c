#include<stdio.h>
#include<stdlib.h>

#include<editline/readline.h>

static char input[2048];

int main(int argc, char** argv){
    puts("Lispy version 0.0.1"); //simpler than printf. \n automatically at the end of line. No formatting features
    puts("Press Ctrl+C to exit");

    while(1){
        char* input = readline("lispy> ");
        add_history(input);
        printf("No you're a %s\n", input);
        free(input);
    }
    return 0;
}