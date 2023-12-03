/*
** EPITECH PROJECT, 2022
** pop_push.c
** File description:
** pop_push
*/

#include "generator.h"
#include <stdio.h>

void push(cell_t *element, cell_t *stack[], int *top, int stacksize)
{
    if (*top == -1) {
        stack[stacksize - 1] = element;
        *top = stacksize - 1;
    } else {
        stack[(*top) - 1] = element;
        (*top)--;
    }
}

void pop(int *top, int stacksize)
{
    if (*top == -1)
        printf("The stack is empty. \n");
    else {
        if ((*top) == stacksize - 1)
            (*top) = -1;
        else
            (*top)++;
    }
}
