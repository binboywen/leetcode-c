//
// Created by BinPC on 2022-09-08.
//
#include <stdio.h>
#include <stdlib.h>
#include "src/uthash.h"
#include "string.h"
#include "math.h"
#include <time.h>
int main() {
    int *a = malloc(sizeof(int));
    *a = 12;

    printf("%d\n", *a);
    char const *str[] = {"test", "aaa"};
    printf("hello world\n");
//    char *c = malloc(sizeof (char ));
//    scanf("%c", &c);
//    printf("%c\n", c);
    time_t *testTime = malloc(sizeof(time_t));
    time_t ret = time(testTime);
    struct tm * retTm = localtime(testTime);

    int aa = 6;
    int bb = 9;
    int c = 0;

    printf("%d\n", c = aa---bb);
    printf("%d\n", aa);
    printf("%d\n", c = aa- --bb);
    printf("%d\n", bb);

    printf("hello world\n");
}