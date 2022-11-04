//
// Created by BinPC on 2022-09-08.
//

#include <stdio.h>
#include <stdlib.h>
#include "src/uthash.h"
#include "string.h"

#include <stdarg.h>
float avg(int n_values, ...);
int main() {
    printf("hello world\n");
    printf("%f\n", avg(5, 1,2,3,4,5));
    return 0;
}

float avg(int n_values, ...)
{
    va_list var_arg;
    int count;
    float sum = 0;
    va_start(var_arg, n_values);
    for (count = 0; count < n_values; count++) {
        sum += va_arg(var_arg, int);

    }
    va_end(var_arg);
    return sum / n_values;
}

