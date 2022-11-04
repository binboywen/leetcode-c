//
// Created by BinPC on 2022-09-10.
//
#include <stdio.h>
#ifndef LEETCODEC_LIST_H
#define LEETCODEC_LIST_H

typedef struct NODE {
    struct NODE *link;
    int value;
} Node;

typedef struct DNODE {
    struct DNODE *pre;
    struct DNODE *next;
    int value;
} DNode;


void print_dlist(DNode *head)
{
    DNode *cur = head->next;
    while (cur != head)
    {
        printf("%d", cur->value);
        cur = cur->next;
        if (head != cur)
            printf("->");

    }
    printf("\n");
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        printf("%d", head->value);
        if (head->link != NULL)
            printf("->");
        head = head->link;
    }
    printf("\n");
}

#endif //LEETCODEC_LIST_H
