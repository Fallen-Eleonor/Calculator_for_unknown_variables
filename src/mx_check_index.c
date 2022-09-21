#include <stdlib.h>
#include "../inc/header.h"

bool mx_check_index(int min, int max, int current){
    if (current == 0 && min < 0) return false;
    if (min < 0) 
    min *= -1;
    if (max < 0) 
    max *= -1;
    if (current < 0) 
    current *= -1;
    while (min != 0) {
        if (min % 10 == max % 10 && min % 10 != current % 10) return false;
        min /= 10;
        max /= 10;
        current /= 10;
    }
    return true;
}


