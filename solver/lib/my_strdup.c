/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** malloc copy string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(const char *src)
{
    char *dest = NULL;

    if (!src)
        return (NULL);
    if (!(dest = malloc(sizeof(char) * (my_strlen(src) + 1))))
        return (NULL);
    dest = my_strcpy(dest, src);
    return (dest);
}
