/*
** EPITECH PROJECT, 2023
** generator
** File description:
** create_wall
*/

#include "generator.h"

static void check_correct_pos_wall(global_t *global, rect_t *rect, int x, int y)
{
    if (y > 0 && global->maze[y - 1][x] == 'X') {
        my_printf("POS VERTI in x:%d y%d same so rand ++\n", x, y);
        rect->rand++;
        rect->start_y++;
    }
    if (y < global->size_y - 1 && global->maze[y + 1][x] == 'X') {
        my_printf("POS VERTI in x:%d y%d same so rand --\n", x, y);
        rect->rand--;
        rect->start_y--;
    }
}

void create_horizontal_wall(global_t *global, rect_t *rect)
{
    check_correct_pos_wall(global, rect, rect->start_x, rect->rand);
    int x = rect->start_x;
    int y = rect->rand;

    for ( ; x < rect->end_x; x++)
        global->maze[y][x] = 'X';
}
