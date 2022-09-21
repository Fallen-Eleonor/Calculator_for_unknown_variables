#include "../inc/header.h"

int mx_atoi_pro(const char *str, const char num){
    long int n = 0;
    int isNegative = 1;
    while (*str != '\0') {
        if (*str == '-' && n == 0 && isNegative == 1) {
            isNegative = - 1;
            str++;
        }
        if (mx_isdigit(*str)) {
            n *= 10;
            n += *str;
            n -= '0';
        }
        else if (*str == '?'){
            n *= 10;
            n += num;
            n -= '0';
        }
        else if (*str != ' ')
            return -142428184;
        str++;
    }
    if (n > 2147483647) return -142428184;
    int result = (int)n;
    return isNegative * result;
}

