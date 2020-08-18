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


void gameloop(t_hunter *hunter)
{
    sfRenderWindow_drawSprite(hunter->window, hunter->bg_sprite, NULL);
    sfText_setPosition(hunter->text2, hunter->pos_text);
    clock(hunter);
    sfSprite_setPosition(hunter->bird_sprite, hunter->pos_bird);
    sfRenderWindow_drawSprite(hunter->window, hunter->bird_sprite, NULL);
    sfRenderWindow_drawText(hunter->window, hunter->text, NULL);
    sfRenderWindow_drawText(hunter->window, hunter->text2, NULL);
    sfRenderWindow_drawText(hunter->window, hunter->text3, NULL);
    sfRenderWindow_drawText(hunter->window, hunter->text4, NULL);
    if (hunter->str2[0] == '0')
        sfRenderWindow_drawText(hunter->window, hunter->text5, NULL);
    sfRenderWindow_display(hunter->window);
    event(hunter);
}

void destroy(t_hunter *hunter)
{
    sfClock_destroy(hunter->clock);
    sfSprite_destroy(hunter->bg_sprite);
    sfTexture_destroy(hunter->texture);
    sfTexture_destroy(hunter->birdtexture);
    sfSprite_destroy(hunter->bird_sprite);
    sfRenderWindow_destroy(hunter->window);
    sfFont_destroy(hunter->font);
    sfText_destroy(hunter->text);
    sfText_destroy(hunter->text2);
    sfText_destroy(hunter->text3);
    sfText_destroy(hunter->text4);
    sfText_destroy(hunter->text5);
}

void text(t_hunter *hunter)
{
    hunter->font = sfFont_createFromFile("res/arial.ttf");
    if (!hunter->font)
        return;
    hunter->text = sfText_create();
    sfText_setFont(hunter->text, hunter->font);
    sfText_setCharacterSize(hunter->text, 50);
    sfText_setString(hunter->text, "Score: ");
}

void text2(t_hunter *hunter)
{
    hunter->str = my_strdup("00");
    hunter->text2 = sfText_create();
    hunter->pos_text.x = 150;
    hunter->pos_text.y = 0;
    sfText_setFont(hunter->text2, hunter->font);
    sfText_setCharacterSize(hunter->text2, 50);
    sfText_setString(hunter->text2, hunter->str);
}

void my_hunter(void)
{
    t_hunter hunter;

    create_window(&hunter);
    if (!hunter.window) {
        my_putstr("ERROR : No window!\n");
        return;
    }
    hunter.clock = sfClock_create();
    display(&hunter);
    initialisation(&hunter);
    bird(&hunter);
    while (sfRenderWindow_isOpen(hunter.window))
        gameloop(&hunter);
    destroy(&hunter);
}
