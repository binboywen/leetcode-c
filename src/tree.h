//
// Created by BinPC on 2022-09-11.
//

#ifndef LEETCODEC_TREE_H
#define LEETCODEC_TREE_H
#define TREE_TYPE int

void insert(TREE_TYPE value);
TREE_TYPE *find(TREE_TYPE value);
void pre_order_traverse(void (*callback)(TREE_TYPE value));

#endif //LEETCODEC_TREE_H
