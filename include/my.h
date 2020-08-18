/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#ifndef _MY_H_
#define _MY_H_

#include "my_hunter.h"

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_is_prime(int nb);

int my_isneg(int n);

int my_put_nbr(int nb);

void my_putchar(char c);

int my_putstr(char *str);

char *my_revstr(char *str);

int *my_showmem(char const *str, int size);

int *my_showstr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_str_isalpha(char const *str);

int *my_str_islower(char const *str);

int *my_str_isnum(char const *str);

int *my_str_isprintable(char const *str);

int *my_str_isupper(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_strlen(char *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

int my_swap(int *a, int *b);

int my_show_word_array(char *const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str, char symbol);

void clock(t_hunter *hunter);

void bird(t_hunter *hunter);

void initialisation(t_hunter *hunter);

void event(t_hunter *hunter);

void display(t_hunter *hunter);

void my_hunter(void);

void score(t_hunter *hunter);

void text3(t_hunter *hunter);

void text(t_hunter *hunter);

void text2(t_hunter *hunter);

void text4(t_hunter *hunter);

void score2(t_hunter *hunter);

void endgame(t_hunter *hunter);

void create_window(t_hunter *hunter);

void event_part2(t_hunter *hunter);

#endif /* MY_H */
