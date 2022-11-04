//
// Created by BinPC on 2022-09-09.
//
#include <stdio.h>
#include <stdlib.h>
#include "src/uthash.h"
#include "string.h"

#ifdef OS_UNIX
    #ifdef OPTION1
        unix_option1
    #endif
    #ifdef OPTION2
        unix_option2
    #endif
#elifdef OS_WIN
    #ifdef OPTION2
        win_option2
    #endif
#else
    #ifdef OPTION2
        linux_option2
    #endif
#endif


struct SIMPLE {
    int a;
    char b;
};


void mystery(int n)
{
    n += 5;
    n /= 10;
    printf("%s\n", "**********" + 10 - n);
}

int main() {
//    char a[] = "test island every";
//    char b[] = " soldier";
//    strcat(a, b);
//    printf("%s\n", a);
//    char * ret = strtok(a, " ");
//    int size = sizeof(struct SIMPLE);
//    printf("%d\n", size);
//    printf("hello world\n");
//    char test = *("xyz" + 1);
//    printf("%c\n", test);
    printf("%s, %d\n", __FILE__, __LINE__);
    for (int i = 0; i <= 11; i++) {
        mystery(i);
    }
}