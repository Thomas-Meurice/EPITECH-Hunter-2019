/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "my_hunter.h"
#include <stdio.h>

void score(t_hunter *hunter)
{
    if (hunter->str[1] <= '9')
        hunter->str[1] += 1;
    if (hunter->str[1] == ':') {
        hunter->str[0] += 1;
        hunter->str[1] = '0';
    }
    sfText_setString(hunter->text2, hunter->str);
}

void text3(t_hunter *hunter)
{
    hunter->text3 = sfText_create();
    hunter->pos_text2.x = 1700;
    hunter->pos_text2.y = 0;
    sfText_setFont(hunter->text3, hunter->font);
    sfText_setCharacterSize(hunter->text3, 50);
    sfText_setString(hunter->text3, "Health: ");
    sfText_setPosition(hunter->text3, hunter->pos_text2);
}

void text4(t_hunter *hunter)
{
    hunter->str2 = my_strdup("3");
    hunter->text4 = sfText_create();
    hunter->pos_text3.x = 1865;
    hunter->pos_text3.y = 0;
    sfText_setFont(hunter->text4, hunter->font);
    sfText_setCharacterSize(hunter->text4, 50);
    sfText_setString(hunter->text4, hunter->str2);
    sfText_setPosition(hunter->text4, hunter->pos_text3);
}

void score2(t_hunter *hunter)
{
    if (hunter->str2[0] > '0')
        hunter->str2[0] -= 1;
    sfText_setString(hunter->text4, hunter->str2);
    if (hunter->str2[0] == '0')
        endgame(hunter);
}

void endgame(t_hunter *hunter)
{
    hunter->duckspeed = 0;
    hunter->pos_bird.x = -110;
    hunter->text5 = sfText_create();
    hunter->pos_text4.x = 700;
    hunter->pos_text4.y = 400;
    sfText_setFont(hunter->text5, hunter->font);
    sfText_setCharacterSize(hunter->text5, 100);
    sfText_setString(hunter->text5, "Game Over");
    sfText_setPosition(hunter->text5, hunter->pos_text4);
}
