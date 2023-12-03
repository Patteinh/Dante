/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "generator.h"
#include <stdio.h>
#include <stdlib.h>

void cond_print_maze(gnrt_t *u, cell_t **maze, int y)
{
    if (y > 0) {
        u->var_cols == 1 ? printf("X") : 0;
        printf("\n");
    }
    for (int x = 0; x < u->cols; x++) {
        maze[y][x].wall[WEST] == 1 ? printf("X") : 0;
        maze[y][x].wall[WEST] == 0 ? printf("*") : 0;
        printf("*");
    }
    y == u->lines - 1 && u->var_cols == 1 ? printf("*") : printf("X");
    y < u->lines - 1 ? printf("\n") : 0;
}

void print_maze(gnrt_t *u, cell_t **maze)
{
    int check = u->var_cols == 1 ? (u->cols * 2) + 1 : (u->cols * 2);

    if (u->var_lines == 1) {
        printf("*");
        for (int i = 2; i != check; i++)
            printf("X");
        printf("\n");
    }
    for (int y = 0; y < u->lines; y++) {
        for (int x = 0; x < u->cols; x++) {
            maze[y][x].wall[NO_WE] == 1 ? printf("X") : 0;
            maze[y][x].wall[NO_WE] == 0 ? printf("*") : 0;
            maze[y][x].wall[NORTH] == 1 ? printf("X") : 0;
            maze[y][x].wall[NORTH] == 0 ? printf("*") : 0;
        }
        cond_print_maze(u, maze, y);
    }
}

void imperfect_randomize(gnrt_t *u, cell_t **maze)
{
    if (!maze)
        return;
    for (int i = 1; i < u->lines - 1; i++)
        for (int j = 1; j < u->cols - 1; j++)
            maze[i][j].wall[NO_WE] = maze[i][j].wall[NO_WE] == 1 ? 0 : 1;
}

int start_generator(int ac, char **av)
{
    gnrt_t *u = malloc(sizeof(gnrt_t));
    set_generator_t(av, u);
    cell_t *stack[u->stacksize];
    gnrt_t rand_c;
    cell_t **maze = malloc(sizeof(cell_t *) * (u->lines));

    create_the_cell(maze, u->lines, u->cols);
    maze[0][0].visited = 1;
    push(&maze[0][0], stack, &u->top, u->stacksize);
    algo_generator(u, stack, &rand_c, maze);
    if (ac == 3)
        imperfect_randomize(u, maze);
    print_maze(u, maze);
    free_all(u, maze);
    return (SUCCESS);
}

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac >= 3)
        return (start_generator(ac, av));
    puts("Bad arguments !\nUSE : ./generator x y [perfect]");
    return (ERROR);
}
