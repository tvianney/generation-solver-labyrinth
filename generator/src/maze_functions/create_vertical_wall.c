/*
** EPITECH PROJECT, 2023
** generator
** File description:
** create_wall
*/

#include "generator.h"

static void check_correct_pos_wall(global_t *global, rect_t *rect, int x, int y)
{
    if (x > 0 && global->maze[y][x - 1] == 'X') {
        my_printf("POS VERTI in x:%d y%d same so rand ++\n", x, y);
        rect->rand++;
        rect->start_x++;
    }
    if (x < global->size_x - 1 && global->maze[y][x + 1] == 'X') {
        my_printf("POS VERTI in x:%d y%d same so rand --\n", x, y);
        rect->rand--;
        rect->start_x--;
    }
}

void create_vertical_wall(global_t *global, rect_t *rect)
{
    check_correct_pos_wall(global, rect, rect->rand, rect->start_y);
    int x = rect->rand;
    int y = rect->start_y;

    for (; y < rect->end_y; y++) {
        global->maze[y][x] = 'X';
    }
}
