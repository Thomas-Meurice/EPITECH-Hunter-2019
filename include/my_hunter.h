/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#ifndef _MY_HUNTER_H_
#define _MY_HUNTER_H_

#include "my.h"
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

typedef struct s_hunter
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfTexture *birdtexture;
    sfSprite *bg_sprite;
    sfSprite *bird_sprite;
    sfVideoMode mode;
    sfIntRect rect;
    float duckspeed;
    sfClock *clock;
    sfTime time;
    float second;
    sfEvent event;
    sfVector2f pos_bird;
    sfVector2i pos_mouse;
    sfVector2f pos_text;
    sfVector2f pos_text2;
    sfVector2f pos_text3;
    sfVector2f pos_text4;
    sfText *text;
    sfText *text2;
    sfText *text3;
    sfText *text4;
    sfText *text5;
    sfFont *font;
    char *str;
    char *str2;
} t_hunter;

#endif /* MY_HUNTER_H_ */
