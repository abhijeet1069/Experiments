/*  
    Program : the start of input, an Operator, one or more expressions, end of input
    Expression : either a Number or '(', and Operator, One or More Expression and ')'
    Operator : + , - , * , /
    Number : an optional - , and one or more characters between 0 and 9

    Regular Expression: Regular expressions are a way of writing grammars for small sections of text such as words or numbers. Grammars
                        written using regular expressions can't consist of multiple rules, but they do give precise and concise control over what is
                        matched and what isn't.
        . : Any character is required
        a : The character a is required
        [abcdef] : Any character in the set abcdef is required
        [a-f] : Any character in range a to f is required
        a? : The character a is optional
        a* : Zero or one of the more a are required
        a+ : One or more of the character a are required
        ^ : The start of the input is required
        $ : The end of input is required



    Build:
        cc -std=c99 -Wall ../mpc/mpc.c parsing.c -ledit -lm -o parsing

*/

#include "../mpc/mpc.h"
#include<editline/readline.h>

int main(int argc, char** argv){
    mpc_parser_t* Number = mpc_new("number");
    mpc_parser_t* Operator = mpc_new("operator");
    mpc_parser_t* Expr = mpc_new("expr");
    mpc_parser_t* Lispy = mpc_new("lispy");

    mpca_lang(MPCA_LANG_DEFAULT,
    "                                                       \
        number : /-?[0-9]+/;                                \
        operator : '+' | '-' | '*' | '/';                   \
        expr : <number> | '(' <operator> <expr>+ ')' ;      \
        lispy : /^/ <operator> <expr>+ /$/;                 \
    ",
    Number, Operator, Expr, Lispy); //grammar for polish expression

    puts("Lispy Version 0.0.0.2");
    puts("Press Ctrl+C to exit\n");

    while(1){
        char* input = readline("lispy> ");
        add_history(input);

        mpc_result_t r;
        if(mpc_parse("<stdin>", input, Lispy, &r)){
            mpc_ast_print(r.output);
            mpc_ast_delete(r.output);
        }
        else{
            mpc_err_print(r.error);
            mpc_err_delete(r.error);
        }
        free(input);
    }
    mpc_cleanup(4, Number, Operator, Expr, Lispy);
    return 0;
}