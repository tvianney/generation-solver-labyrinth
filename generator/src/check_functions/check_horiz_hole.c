/*
** EPITECH PROJECT, 2023
** generator
** File description:
** check_horiz_hole
*/

#include "generator.h"

int check_horiz_hole(global_t *global, rect_t *rect, int hole)
{
    char up_left = '*', up_right = '*', down_left = '*', down_right = '*';
    char left_middle = 'X', right_middle = 'X';

    if (rect->start_y > 0 && rect->start_y < global->size_y - 1) {
        if (hole > 0) {
            up_left = global->maze[rect->start_y - 1][hole - 1];
            down_left = global->maze[rect->start_y + 1][hole - 1];
            left_middle = global->maze[rect->start_y][hole - 1];
        }
        if (hole < global->size_x - 1) {
            up_right = global->maze[rect->start_y - 1][hole + 1];
            down_right = global->maze[rect->start_y + 1][hole + 1];
            right_middle = global->maze[rect->start_y][hole + 1];
        }
    }
    if (up_left == 'X' && down_left == 'X' && left_middle == '*')
        return hole + 1;
    if (up_right == 'X' && down_right == 'X' && right_middle == '*')
        return hole - 1;
    return hole;
}
