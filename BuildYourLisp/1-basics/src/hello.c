#include<stdio.h>

void xprint(char* msg, int count){
    for(int i = 0; i < count; i++){
        printf("%s\n",msg);
    }
}

int main(int argc, char** argv){
    xprint("Hello,WOrld",5);
    return 0;
}