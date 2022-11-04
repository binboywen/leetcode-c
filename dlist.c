//
// Created by BinPC on 2022-09-10.
//
#include "src/list.h"
#include <stdio.h>
#include <stdlib.h>

DNode * InsertDNode(DNode *head, int value)
{
    DNode *cur = head->next;
    while (cur != head && cur->value < value) {
        cur = cur->next;
    }
    DNode * newNode = malloc(sizeof(DNode));
    newNode->value = value;

    newNode->pre = cur->pre;
    newNode->next = cur;
    cur->pre->next = newNode;
    cur->pre = newNode;
    return NULL;
}

int main()
{
    DNode *a = malloc(sizeof(DNode));
    DNode *b = malloc(sizeof(DNode));
    DNode *c = malloc(sizeof(DNode));
    DNode *d = malloc(sizeof(DNode));
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;
    d->pre = c;
    c->pre = b;
    b->pre = a;
    a->pre = d;
    a->value = -1;
    b->value = 3;
    c->value = 6;
    d->value = 9;
    print_dlist(a);
    InsertDNode(a, 1);
    print_dlist(a);
    InsertDNode(a, 5);
    print_dlist(a);
    InsertDNode(a, 7);
    print_dlist(a);
    InsertDNode(a, 10);
    print_dlist(a);
    printf("hello world!");
}