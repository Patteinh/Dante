/*
** EPITECH PROJECT, 2022
** deph_first.c
** File description:
** depth_first
*/

#include "generator.h"
#include <stdlib.h>

void algo_generator(gnrt_t *u, cell_t *stack[], gnrt_t *rand_c, cell_t **maze)
{
    while (u->top != EMPTY) {
        cell_t *current_cell = stack[u->top];
        pop(&u->top, u->stacksize);
        if ((CHECK_TOP) || (CHECK_DOWN) || (CHECK_LEFT) || (CHECK_RIGHT)) {
            push(current_cell, stack, &u->top, u->stacksize);
            rand_c = choice_cell(maze, current_cell, u);
            current_cell->wall[rand_c->direction] = 0;
            rand_c->cell->wall[u->opposites[rand_c->direction]] = 0;
            rand_c->cell->visited = 1;
            push(rand_c->cell, stack, &u->top, u->stacksize);
        }
    }
}

void create_the_cell(cell_t **maze, int lines, int cols)
{
    for (int i = 0; i != lines; i++) {
        maze[i] = malloc(sizeof(cell_t) * (cols));
        for (int j = 0; j != cols; j++)
            maze[i][j] = create_cell(i, j, lines, cols);
    }
}

cell_t create_cell(int y, int x, int lines, int cols)
{
    cell_t cell;

    for (int i = 0; i != 8; i++)
        cell.wall[i] = 1;
    y == 0 ? cell.wall[NORTH] = -1 : 0;
    y == 0 ? cell.wall[NO_WE] = -1 : 0;
    y == 0 ? cell.wall[NO_EA] = -1 : 0;
    x == 0 ? cell.wall[WEST] = -1 : 0;
    x == 0 ? cell.wall[NO_WE] = -1 : 0;
    x == 0 ? cell.wall[SO_WE] = -1 : 0;
    y == lines - 1 ? cell.wall[SOUTH] = -1 : 0;
    y == lines - 1 ? cell.wall[SO_WE] = -1 : 0;
    y == lines - 1 ? cell.wall[SO_EA] = -1 : 0;
    x == cols - 1 ? cell.wall[EAST] = -1 : 0;
    x == cols - 1 ? cell.wall[NO_EA] = -1 : 0;
    x == cols - 1 ? cell.wall[SO_EA] = -1 : 0;
    cell.visited = 0;
    cell.y = y;
    cell.x = x;
    return (cell);
}
