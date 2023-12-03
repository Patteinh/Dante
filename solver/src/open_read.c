/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** open_read
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "solver.h"

int open_file(solver_t *s, char *filepath)
{
    FILE *fd = fopen(filepath, "r");
    ssize_t read;
    size_t size;
    char *line = NULL;
    char *tmp = NULL;

    if (fd == NULL)
        return (ERROR);
    while ((read = getline(&line, &size, fd)) != -1) {
        tmp = s->buff;
        if (!s->buff)
            s->buff = my_strdup(line);
        else
            s->buff = my_strcat(s->buff, line);
        if (tmp)
            free(tmp);
    }
    free(line);
    fclose(fd);
    return (SUCCESS);
}
