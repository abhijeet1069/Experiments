/**
    Function pointer included from different C file
*/

#include"fun.h"

int main(){
    void (*fun_ptr)(int) = &fun;
    (*fun_ptr)(10);
    return 0;
}