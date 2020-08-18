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
#include <stdlib.h>

void create_window(t_hunter *hunter)
{
    hunter->duckspeed = 1;
    hunter->mode.width = 1920;
    hunter->mode.height = 1080;
    hunter->mode.bitsPerPixel = 32;
    text(hunter);
    text2(hunter);
    text3(hunter);
    text4(hunter);
    hunter->window = sfRenderWindow_create(hunter->mode, "my_hunter",
        sfDefaultStyle | sfClose, NULL);
}

void event_part2(t_hunter *hunter)
{
    if ((hunter->pos_bird.x < hunter->pos_mouse.x) &&
        (hunter->pos_mouse.x < hunter->pos_bird.x + 110) &&
        (hunter->pos_bird.y < hunter->pos_mouse.y) &&
        (hunter->pos_mouse.y < hunter->pos_bird.y + 110)) {
        hunter->pos_bird.x = -110;
        hunter->pos_bird.y = rand() % 1000;
        sfRenderWindow_drawSprite(hunter->window, hunter->bird_sprite,
            NULL);
        hunter->duckspeed += 0.2;
        score(hunter);
    } else {
        score2(hunter);
    }
}