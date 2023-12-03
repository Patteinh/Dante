/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** generator.h
*/

#include <time.h>

#ifndef _GENERATOR_H
    #define _GENERATOR_H
    #define D_NORTH gnrt.direction = NORTH
    #define LEFT maze[current_cell->y][current_cell->x - 1]
    #define RIGHT maze[current_cell->y][current_cell->x + 1]
    #define DOWN maze[current_cell->y + 1][current_cell->x]
    #define TOP maze[current_cell->y - 1][current_cell->x]
    #define SUP_Y current_cell->y > 0
    #define SUP_X current_cell->x > 0
    #define INF_X current_cell->x < u->cols - 1
    #define INF_Y current_cell->y < u->lines - 1
    #define CHECK_TOP current_cell->y > 0 && TOP.visited == 0
    #define CHECK_DOWN current_cell->y < u->lines - 1 && DOWN.visited == 0
    #define CHECK_LEFT current_cell->x > 0 && LEFT.visited == 0
    #define CHECK_RIGHT current_cell->x < u->cols - 1 && RIGHT.visited == 0
    #define CHECK (CHECK_TOP) || (CHECK_DOWN) || (CHECK_LEFT) || (CHECK_RIGHT)

static const int EMPTY = -1;
static const int TRUE = 1;
static const int FALSE = 0;
static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;

enum direction {
    WEST,
    EAST,
    NORTH,
    SOUTH,
    NO_WE,
    NO_EA,
    SO_WE,
    SO_EA,
};

typedef struct st_cell {
    int wall[8];
    int visited;
    int x;
    int y;
} cell_t;

typedef struct st_generator {
    int cols;
    int lines;
    int opposites[4];
    int stacksize;
    int top;
    int count;
    int direction;
    int var_lines;
    int var_cols;
    int rand;
    cell_t *cell;
} gnrt_t;

int start_generator(int ac, char **av);
void set_generator_t(char **av, gnrt_t *u);
void create_the_cell(cell_t **maze, int lines, int cols);
void algo_generator(gnrt_t *u, cell_t *stack[], gnrt_t *rand_c, cell_t **maze);
cell_t create_cell(int y, int x, int lines, int cols);
void push(cell_t *element, cell_t *stack[], int *top, int stacksize);
void pop(int *top, int stacksize);
gnrt_t *choice_cell(cell_t **maze, cell_t *current_cell, gnrt_t *gnrt);
int first_choice(cell_t **maze, cell_t *current_cell, gnrt_t *u);
int second_choice(cell_t **maze, cell_t *current_cell, gnrt_t *u);
void print_maze(gnrt_t *u, cell_t **maze);
void cond_print_maze(gnrt_t *u, cell_t **maze, int y);
void free_all(gnrt_t *u, cell_t **maze);

#endif
