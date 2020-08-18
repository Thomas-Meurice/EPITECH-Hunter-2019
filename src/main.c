/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void flag_h(void)
{
    my_putstr("My_hunter: the rules of this game is to shoot the bird"
                "\n\tclick to shoot\n\t"
                "Esc to quit or the button on the right top\n\t"
                "you have 3 life after that is game"
                "over for you and the game close\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        flag_h();
    else if (ac == 1) {
        my_hunter();
        return (0);
    }
    if (ac > 2)
        return (84);
}