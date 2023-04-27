/*
** EPITECH PROJECT, 2023
** generator
** File description:
** check_pos_wall
*/

#include "generator.h"

void check_pos_wall(global_t *global, rect_t *rect)
{
    if (rect->dir == VERTICAL) {
        if (rect->start_x == 0 && rect->end_y == global->size_y
            && rect->rand == 0) {
            rect->rand++;
        }
        if (rect->start_x == global->size_x - 1 && rect->end_y == global->size_y
            && rect->rand == global->size_x - 1) {
            rect->rand--;
        }
    } else {
        if (rect->start_y == 0 && rect->end_x == global->size_x
            && rect->rand == 0) {
            rect->rand++;
        }
        if (rect->start_y == global->size_y - 1 && rect->end_x == global->size_x
            && rect->rand == global->size_y - 1) {
            rect->rand--;
        }
    }
}
