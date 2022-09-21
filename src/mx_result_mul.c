#include "../inc/header.h"

void mx_result_mul(int *border, char *operand1, char *operand2, char *result){
    for (int op1 = border[3]; op1 <= border[0]; op1++) {
        if (mx_check_index(mx_atoi_pro(operand1, '1'), border[0], op1) == false) continue;
        for (int op2 = border[4]; op2 <= border[1]; op2++) {
            if (mx_check_index(mx_atoi_pro(operand2, '1'), border[1], op2) == false) continue;
            for (int res = border[5]; res <= border[2]; res++) {
                if (mx_check_index(mx_atoi_pro(result, '1'), border[2], res) == false) continue;
                if (op1 * op2 == res) {
                    mx_print_result(op1,op2,res,'*');
                }
                }
            }
        }
    }



