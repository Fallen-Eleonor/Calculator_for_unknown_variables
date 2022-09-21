#ifndef header_h
#define header_h

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

enum e_errors {
    OPERAND,
    OPERATOR,
    RESULT
};
typedef enum e_errors errors;
//my
void mx_results(char *operand1, char *operand2, char *operation, char *result);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi_pro(const char *str, const char num);
bool mx_check_index(int min, int max, int current);
int mx_strcmp(const char *s1, const char *s2);
void mx_result_add(int *border, char *operand1, char *operand2, char *result);
void mx_result_sub(int *border, char *operand1, char *operand2, char *result);
void mx_result_mul(int *border, char *operand1, char *operand2, char *result);
void mx_result_div(int *border, char *operand1, char *operand2, char *result);
int *mx_calculate_borders(char *operand1, char *operand2, char *result);

//yours
void mx_printerr(const char *s);
void mx_error(errors error, char *op);
void mx_error_handler(int argc, char *op[], char *argv[]);
char *mx_strtrim(const char *str);
int mx_strlen(const char *s);
char *mx_strndup(const char *s1, int n);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_error_swift(int argc);
void mx_error_len_zero(char *op[], char *argv[]);
void mx_printint(int n);
void mx_printchar(char c);
void mx_print_result(int op1, int op2, int res, char c);

#endif
