/*
** EPITECH PROJECT, 2022
** lib.h
** File description:
** lib.h
*/

#ifndef _MY_H_
    #define _MY_H_

void my_putchar(const char c);
void my_putstr(const char *str);
void my_perror(const char *str);
int  my_strlen(const char *str);
int  my_arraylen(const char **array);
int  my_putnbr(int nb);
int  my_atoi(const char *str);
char *my_strcat(const char *left, const char *right);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *src);
int  my_strcmp(const char *s1, const char *s2);
void my_printf(const char *str, ...);
char *my_clean_str(const char *str, const char *d);
char **my_str_to_array(const char *str, const char *d);
void my_parray(const char **array);
void my_free_array(char **array);
char *my_get_file(const char *path);

static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;

#endif
