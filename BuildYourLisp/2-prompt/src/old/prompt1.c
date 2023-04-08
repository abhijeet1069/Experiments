#include<stdio.h>

static char input[2048];

int main(int argc, char** argv){
    puts("Lispy version 0.0.1"); //simpler than printf. \n automatically at the end of line. No formatting features
    puts("Press Ctrl+C to exit");

    while(1){
        fputs("lispy> ",stdout);
        fgets(input,2048,stdin);
        printf("No you are a %s", input);
    }
    return 0;
}