#include "../inc/header.h"

int main(int argc, char * argv[]) {
    char *op[4];
    mx_error_handler(argc, op, argv);
    mx_results(argv[1], argv[3], mx_strtrim(argv[2]), argv[4]);
    return 0;
}
