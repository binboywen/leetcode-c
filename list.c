//
// Created by BinPC on 2022-09-10.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "src/uthash.h"
#include "string.h"
#include "src/list.h"

Node* InsertList(Node *root, int value) {
    Node *ret = root;
    Node *pre = NULL;
    while (ret != NULL && ret->value < value) {
        pre = ret;
        ret = ret->link;
    }
    Node *temp = malloc(sizeof(Node));
    temp->value = value;
    if (temp == NULL) {
        return NULL;
    }
    if (ret == root) {
        temp->link = root;
        return temp;
    }
    pre->link = temp;

    temp->link = ret;
    return root;
}

Node *search_list(Node *node, void const *value, int (*compare)(void const *, void const *))
{
    while (node != NULL) {
        if (compare(&node->value, value) == 0) {
            break;
        }
        node = node->link;
    }
    return node;
}

int compare_int(void const *a, void const *b)
{
    if (* (int *)a == * (int *)b) {
        return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    while (*argv != NULL) {
        printf("%s\n",*argv);
        ++argv;
    }
    Node *c = malloc(sizeof(Node));
    c->link = NULL;
    c->value = 9;
    Node *b = malloc(sizeof(Node));
    b->link = c;
    b->value = 6;

    Node *a = malloc(sizeof(Node));
    a->link = b;
    a->value = 3;
    print_list(a);
    fflush(stdout);
    a = InsertList(a, 1);
    print_list(a);
    InsertList(a, 5);
    print_list(a);
    InsertList(a, 7);
    print_list(a);
    InsertList(a, 10);
    print_list(a);
    printf("hello world");
}