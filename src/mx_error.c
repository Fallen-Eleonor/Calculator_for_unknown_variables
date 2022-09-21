#include "../inc/header.h"

void mx_error(errors error, char *op)
{
    switch (error) {
    case OPERAND:
        mx_printerr("Invalid operand: ");
        break;
    case OPERATOR:
        mx_printerr("Invalid operation: ");
        break;
    case RESULT:
        mx_printerr("Invalid result: ");
        break;
    }
    mx_printerr(op);
    mx_printerr("\n");
    exit(-1);
}


