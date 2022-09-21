#include "../inc/header.h"

int *mx_calculate_borders(char *operand1, char *operand2, char *result){
    int *arr = malloc(sizeof(int*));
    arr[0] = mx_atoi_pro(operand1, '9') > mx_atoi_pro(operand1, '0') ? mx_atoi_pro(operand1, '9') : mx_atoi_pro(operand1, '0');
    arr[1] = mx_atoi_pro(operand2, '9') > mx_atoi_pro(operand2, '0') ? mx_atoi_pro(operand2, '9') : mx_atoi_pro(operand2, '0');
    arr[2] = mx_atoi_pro(result, '9') > mx_atoi_pro(result, '0') ? mx_atoi_pro(result, '9') : mx_atoi_pro(result, '0');
    arr[3] = mx_atoi_pro(operand1, '9') < mx_atoi_pro(operand1, '0') ? mx_atoi_pro(operand1, '9') : mx_atoi_pro(operand1, '0');
    arr[4] = mx_atoi_pro(operand2, '9') < mx_atoi_pro(operand2, '0') ? mx_atoi_pro(operand2, '9') : mx_atoi_pro(operand2, '0');
    arr[5] = mx_atoi_pro(result, '9') < mx_atoi_pro(result, '0') ? mx_atoi_pro(result, '9') : mx_atoi_pro(result, '0');
    return arr;
}


