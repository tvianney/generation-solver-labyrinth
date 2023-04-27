/*
** EPITECH PROJECT, 2023
** generator
** File description:
** check_vert_hole
*/

#include "generator.h"

int check_vert_hole(global_t *global, rect_t *rect, int hole)
{
    char up_left = '*', up_right = '*', down_left = '*', down_right = '*';
    char down_middle = 'X', up_middle = 'X';

    if (rect->start_x > 0 && rect->start_x < global->size_x - 1) {
        if (hole > 0) {
            up_left = global->maze[hole - 1][rect->start_x - 1];
            up_right = global->maze[hole - 1][rect->start_x + 1];
            up_middle = global->maze[hole - 1][rect->start_x];
        }
        if (hole < global->size_y - 2) {
            down_left = global->maze[hole + 1][rect->start_x - 1];
            down_right = global->maze[hole + 1][rect->start_x + 1];
            down_middle = global->maze[hole + 1][rect->start_x];
        }
    }
    if (up_left == 'X' && up_right == 'X' && up_middle == '*')
        return hole + 1;
    if (down_left == 'X' && down_right == 'X' && down_middle == '*')
        return hole - 1;
    return hole;
}
