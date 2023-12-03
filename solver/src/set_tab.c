/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** set_tab
*/

#include <stdlib.h>
#include "solver.h"

void recup_lines_cols(solver_t *s)
{
    s->waze = my_str_to_array(s->buff, "\n");
    for (s->lines = 0; s->waze[s->lines]; s->lines++)
        for (s->cols = 0; s->waze[s->lines][s->cols]; s->cols++);
}

void count_visited(solver_t *s)
{
    s->visited = malloc(sizeof(char *) * (s->lines));
    for (int i = 0; i != s->lines; i++) {
        s->visited[i] = malloc(sizeof(char) * s->cols);
        for (int j = 0; j != s->cols; j++)
            s->visited[i][j] = 0;
    }
    s->end_x = s->cols - 1;
    s->end_y = s->lines - 1;
}

int check_start(solver_t *s, int x, int y)
{
    if (x == s->end_x && y == s->end_y)
        return (1);
    if ((s->waze[y][x] == 'X') || s->visited[y][x])
        return (0);
    return (2);
}
