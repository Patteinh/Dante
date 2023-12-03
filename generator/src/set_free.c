/*
** EPITECH PROJECT, 2022
** set_free.c
** File description:
** set_free
*/

#include "generator.h"
#include <stdlib.h>

void set_generator_t(char **av, gnrt_t *u)
{
    u->cols = atoi(av[1]);
    u->lines = atoi(av[2]);
    u->var_lines = u->lines % 2 == 0 ? 1 : 0;
    u->var_cols = u->cols % 2 == 0 ? 1 : 0;
    u->cols = u->cols % 2 == 0 ? u->cols / 2 : u->cols / 2 + 1;
    u->lines = u->lines % 2 == 0 ? u->lines / 2 : u->lines / 2 + 1;
    u->stacksize = u->cols * u->lines;
    u->top = -1;
    u->opposites[0] = EAST;
    u->opposites[1] = WEST;
    u->opposites[2] = SOUTH;
    u->opposites[3] = NORTH;
}

void free_all(gnrt_t *u, cell_t **maze)
{
    for (int i = 0; i < u->lines; i++)
        free(maze[i]);
    free(maze);
    free(u);
}
