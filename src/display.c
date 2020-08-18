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

void clock(t_hunter *hunter)
{
    hunter->time = sfClock_getElapsedTime(hunter->clock);
    hunter->second = hunter->time.microseconds / 1000000.0;
    hunter->pos_bird.x += hunter->duckspeed;
    if (hunter->pos_bird.x >=
        (float)sfWindow_getSize((sfWindow *)hunter->window).x) {
        hunter->pos_bird.x = -110;
        hunter->pos_bird.y = rand() % 1000;
    }
    if (hunter->second >= 0.1) {
        hunter->rect.left += hunter->rect.width;
        sfClock_restart(hunter->clock);
        if (hunter->rect.left == 330) {
            hunter->rect.left = 0;
        }
    }
    sfSprite_setTextureRect(hunter->bird_sprite, hunter->rect);
}

void bird(t_hunter *hunter)
{
    hunter->bird_sprite = sfSprite_create();
    hunter->birdtexture = sfTexture_createFromFile("res/pigeon.png", NULL);
    if (!hunter->birdtexture)
        return;
    sfSprite_setTexture(hunter->bird_sprite, hunter->birdtexture, sfTrue);
}

void initialisation(t_hunter *hunter)
{
    hunter->rect.top = 0;
    hunter->rect.left = 0;
    hunter->rect.width = 110;
    hunter->rect.height = 110;
    hunter->pos_bird.x = -110;
    hunter->pos_bird.y = rand() % 1000;
}

void display(t_hunter *hunter)
{
    hunter->texture = sfTexture_createFromFile("res/background.jpg", NULL);
    if (!hunter->texture)
        return;
    hunter->bg_sprite = sfSprite_create();
    sfSprite_setTexture(hunter->bg_sprite, hunter->texture, sfFalse);
}

void event(t_hunter *hunter)
{
    while (sfRenderWindow_pollEvent(hunter->window, &hunter->event)) {
        if (hunter->event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(hunter->window);
        }
        hunter->pos_mouse = sfMouse_getPositionRenderWindow(hunter->window);
        if (hunter->event.type == sfEvtMouseButtonPressed) {
            event_part2(hunter);
        }
    }
}
