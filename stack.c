//
// Created by BinPC on 2022-09-11.
//
#include "src/stack.h"

#include <stdio.h>

#define STACK_SIZE 100
static STACK_TYPE stack[STACK_SIZE];
static int top_element = -1;

void push(STACK_TYPE value)
{
    if (is_full()) {
        return;
    }
    top_element += 1;
    stack[top_element] = value;
}

void pop(void)
{
    if (is_empty()) {
        return;
    }
    top_element -= 1;
}

STACK_TYPE top()
{
    if (is_empty()) {
        return -1;
    }
    return stack[top_element];
}

int is_empty()
{
    return top_element == -1;
}

int is_full()
{
    return top_element == STACK_SIZE - 1;
}

void printStack()
{
    for (int i = 0; i < top_element; i++) {
        printf("%d->", stack[i]);
    }
    printf("\n");
}

int main()
{
    pop();
    push(1);
    push(2);
    push(3);
    push(4);
    printStack();
    pop();
    printStack();
    return 0;
}