/*
** EPITECH PROJECT, 2022
** choice_cell.c
** File description:
** choice_cell
*/

#include "generator.h"
#include <stdlib.h>

int second_choice(cell_t **maze, cell_t *current_cell, gnrt_t *u)
{
    if (u->rand == 2 && (SUP_X && LEFT.visited == 0)) {
        u->direction = WEST;
        u->cell = &(LEFT);
        return (TRUE);
    } else if (u->rand == 3 && (INF_X && RIGHT.visited == 0)) {
        u->direction = EAST;
        u->cell = &(RIGHT);
        return (TRUE);
    }
    return (FALSE);
}

int first_choice(cell_t **maze, cell_t *current_cell, gnrt_t *u)
{
    if (u->rand == 0 && (SUP_Y && TOP.visited == 0)) {
        u->direction = NORTH;
        u->cell = &(TOP);
        return (TRUE);
    } else if (u->rand == 1 && (INF_Y && DOWN.visited == 0)) {
        u->direction = SOUTH;
        u->cell = &(DOWN);
        return (TRUE);
    }
    return (FALSE);
}

gnrt_t *choice_cell(cell_t **maze, cell_t *current_cell, gnrt_t *u)
{
    u->rand = rand() % 4;

    if (first_choice(maze, current_cell, u))
        return (u);
    else if (second_choice(maze, current_cell, u))
        return (u);
    return (choice_cell(maze, current_cell, u));
}
