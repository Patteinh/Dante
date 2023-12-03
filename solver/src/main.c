/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include "solver.h"

int algo_solve(solver_t *s, int x, int y)
{
    if ((s->key = check_start(s, x, y)) != 2)
        return (s->key);
    s->visited[y][x] = 1;
    if (check_left_right(s, x, y) != 2)
        return (1);
    if (check_top_bottom(s, x, y) != 2)
        return (1);
    return (0);
}

int no_solution_found(solver_t *s)
{
    printf("no solution found");
    free_struct_elements(s);
    return (SUCCESS);
}

int step_solver(solver_t *s, char **argv)
{
    set_struct_values(s);
    if (open_file(s, argv[1]))
        return (ERROR);
    recup_lines_cols(s);
    count_visited(s);
    if (!algo_solve(s, s->start_x, s->start_y))
        return (no_solution_found(s));
    else
        s->waze[s->end_y][s->end_x] = 'o';
    for (int i = 0; s->waze[i]; i++)
        puts(s->waze[i]);
    free_struct_elements(s);
    return (SUCCESS);
}

int main(int argc, char **argv)
{
    solver_t *s = malloc(sizeof(solver_t));

    if ((argc == 2) && (!step_solver(s, argv)))
        return (SUCCESS);
    puts("Bad arguments !\nUSE : ./solver maze.txt");
    free(s);
    return (ERROR);
}
