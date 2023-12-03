/*
** EPITECH PROJECT, 2022
** solver.h
** File description:
** solver.h
*/

#include "solver_struct.h"
#include "my.h"

#ifndef _SOLVER_H
    #define _SOLVER_H

int check_top_bottom(solver_t *s, int x, int y);
int check_left_right(solver_t *s, int x, int y);
int open_file(solver_t *s, char *filepath);
int algo_solve(solver_t *s, int x, int y);
int step_solver(solver_t *s, char **argv);
void set_struct_values(solver_t *s);
int check_start(solver_t *s, int x, int y);
void count_visited(solver_t *s);
void recup_lines_cols(solver_t *s);
int no_solution_found(solver_t *s);
void free_struct_elements(solver_t *s);

#endif
