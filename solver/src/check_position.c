/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** check_position
*/

#include "solver.h"

int check_left_right(solver_t *s, int x, int y)
{
    if (x != 0)
        if (algo_solve(s, x - 1, y)) {
            s->waze[y][x] = 'o';
            return 1;
        }
    if (x != (s->cols - 1))
        if (algo_solve(s, x + 1, y)) {
            s->waze[y][x] = 'o';
            return 1;
        }
    return 2;
}

int check_top_bottom(solver_t *s, int x, int y)
{
    if (y != 0)
        if (algo_solve(s, x, y - 1)) {
            s->waze[y][x] = 'o';
            return 1;
        }
    if (y != s->lines - 1)
        if (algo_solve(s, x, y + 1)) {
            s->waze[y][x] = 'o';
            return 1;
        }
    return 2;
}
