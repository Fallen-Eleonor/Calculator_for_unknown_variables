#include "../inc/header.h"

void mx_print_result(int op1, int op2, int res, char c) {
    mx_printint(op1);
    mx_printchar(' ');
    mx_printchar(c);
    mx_printchar(' ');
    mx_printint(op2); 
    mx_printchar(' ');
    mx_printchar('=');
    mx_printchar(' ');
    mx_printint(res);
    mx_printchar('\n'); 
}

