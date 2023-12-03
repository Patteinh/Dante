/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** solver_struct
*/

#ifndef SOLVER_STRUCT_H_
    #define SOLVER_STRUCT_H_

typedef struct st_solver {
    char *buff;
    char **waze;
    char **visited;
    int cols;
    int lines;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    int key;
} solver_t;

#endif
