/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** free_elements
*/

#include "solver.h"
#include <stdlib.h>

void set_struct_values(solver_t *s)
{
    s->buff = NULL;
    s->waze = NULL;
    s->visited = NULL;
    s->start_x = 0;
    s->start_y = 0;
}

void free_struct_elements(solver_t *s)
{
    free(s->buff);
    my_free_array(s->waze);
    for (int i = 0; i != s->lines; i++)
        free(s->visited[i]);
    free(s->visited);
    free(s);
}
