#include "../inc/header.h"

void mx_error_swift(int argc) {
        if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        exit(-1);
    }
}

void mx_error_len_zero(char *op[], char *argv[]) {
    for (int i = 1; i < 5; i++) {
        if (i == 2 && mx_strlen(op[i - 1]) != 1)
            mx_error(OPERATOR, argv[i]);
        if (mx_strlen(op[i - 1]) <= 0) {
            if (i != 5)
                mx_error(OPERAND, argv[i]);
            else
                mx_error(RESULT, argv[i]);
        }
    }
}

void mx_error_handler(int argc, char *op[], char *argv[]) {
    mx_error_swift(argc);
    for (int i = 1; i < 5; i++)
        op[i - 1] = mx_strtrim(argv[i]);
    mx_error_len_zero(op, argv);
    for (int i = 0; i < 4; i++) {
        if (i == 1)
            continue;
        for (int j = 0; j < mx_strlen(op[i]); j++) {
            if (j == 0 && op[i][j] == '-')
                continue;
            if ( i == 3 && op[i][j] != '?' && !mx_isdigit(op[i][j]))
                mx_error(RESULT, op[i]);
            if (op[i][j] != '?' && !mx_isdigit(op[i][j]))
                mx_error(OPERAND, op[i]);
        }
    }
    if (*op[1] != '?' && *op[1] != '+' && *op[1] != '-' && *op[1] != '*' && *op[1] != '/')
        mx_error(OPERATOR, argv[2]);
}

