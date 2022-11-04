cmake_minimum_required(VERSION 3.23)
project(leetcode-c C)

set(CMAKE_C_STANDARD 11)
add_executable(leetcode-c main.c)

add_executable(test test.c)
add_executable(valist valist.c)
add_executable(stringTest stringTest.c)
add_executable(list list.c)
add_executable(dlist dlist.c)
add_executable(stack stack.c)
add_executable(queue queue.c)
add_executable(tree tree.c)