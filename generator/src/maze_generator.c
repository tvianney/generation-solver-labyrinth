/*
** EPITECH PROJECT, 2023
** generator
** File description:
** maze_generator
*/

#include "generator.h"

static void create_random_hole(global_t *global, rect_t *rect)
{
    int hole;

    if (rect->dir == VERTICAL) {
        hole = rand_impair_int(rect->start_y, rect->end_y - 1);
        global->maze[hole][rect->rand] = '*';
    } else {
        hole = rand_impair_int(rect->start_x, rect->end_x - 1);
        global->maze[rect->rand][hole] = '*';
    }
}

static void create_walls(global_t *global, rect_t *rect, rect_t *new_rect)
{
    if (rect->dir == VERTICAL) {
        rect->rand = rand_pair_int(rect->start_x + 1, rect->end_x - 2);
        new_rect->start_x = rect->rand + 1;
        new_rect->start_y = rect->start_y;
        check_pos_wall(global, rect);
        create_vertical_wall(global, rect);
        create_random_hole(global, rect);
        rect->end_x = rect->rand;
    } else {
        rect->rand = rand_pair_int(rect->start_y + 1, rect->end_y - 2);
        new_rect->start_x = rect->start_x;
        new_rect->start_y = rect->rand + 1;
        check_pos_wall(global, rect);
        create_horizontal_wall(global, rect);
        create_random_hole(global, rect);
        rect->end_y = rect->rand;
    }
}

void maze_generator(global_t *global, rect_t *rect)
{
    rect_t new_rect;

    if (rect->end_x - rect->start_x < 2 || rect->end_y - rect->start_y < 2)
        return;
    if (rect->end_x - rect->start_x == 2 && rect->end_y - rect->start_y == 2)
        return;
    rect->dir = check_dir(rect);

    new_rect.end_x = rect->end_x;
    new_rect.end_y = rect->end_y;

    create_walls(global, rect, &new_rect);

    new_rect.dir = rect->dir;
    new_rect.rand = rect->rand;

    maze_generator(global, &new_rect);
    maze_generator(global, rect);
}
