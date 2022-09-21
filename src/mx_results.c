#include "../inc/header.h"

void mx_results(char *operand1, char *operand2, char *operation, char *result){
    int *bord = mx_calculate_borders(operand1, operand2, result);
    if (mx_strcmp(operation, "+") == 0){
        mx_result_add(bord, operand1, operand2, result);
    }
    else if (mx_strcmp(operation, "-") == 0)
        mx_result_sub(bord, operand1, operand2, result);
    else if (mx_strcmp(operation, "/") == 0)
        mx_result_div(bord, operand1, operand2, result);
    else if (mx_strcmp(operation, "*") == 0)
        mx_result_mul(bord, operand1, operand2, result);
    else if (mx_strcmp(operation, "?") == 0){
        mx_result_add(bord, operand1, operand2, result);
        mx_result_sub(bord, operand1, operand2, result);
        mx_result_mul(bord, operand1, operand2, result);
        mx_result_div(bord, operand1, operand2, result);
    }
    free(bord);
}


