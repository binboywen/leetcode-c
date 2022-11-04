//
// Created by BinPC on 2022-09-11.
//
#include "src/queue.h"
#include <stdio.h>

#define QUEUE_SIZE 100
#define ARRAY_SIZE (QUEUE_SIZE + 1)
static QUEUE_TYPE queue[ARRAY_SIZE];
static size_t front = 1;
static size_t rear = 0;

void create_queue(size_t size)
{

}
void destroy_queue(void)
{

}
void insert(QUEUE_TYPE value)
{
    if (is_full()) {
        return;
    }
    rear = (rear + 1) % ARRAY_SIZE;
    queue[rear] = value;
}
void delete(void)
{
    if (is_empty()) {
        return;
    }
    front = (front + 1) % ARRAY_SIZE;
}
QUEUE_TYPE first(void)
{
    if (is_empty()) {
        return -1;
    }
    return queue[front];
}
int is_empty(void)
{
    return (rear + 1) % ARRAY_SIZE == front;
}
int is_full(void)
{
    return (rear + 2) % ARRAY_SIZE == front;
}

void printQueue()
{
    for (int i = front; (rear + 1) % ARRAY_SIZE > i; i++) {
        printf("%d->", queue[i]);
    }
    printf("\n");
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    printQueue();
    delete();
    printQueue();
    return 0;
}