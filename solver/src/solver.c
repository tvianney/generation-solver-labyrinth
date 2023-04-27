/*
** EPITECH PROJECT, 2022
** dante
** File description:
** solver.c
*/

#include "solver.h"

short solver(global_t *global, int y, int x)
{
    if (x == global->max_x - 1 && y == global->max_y - 1) {
        global->maze[y][x] = 'o';
        return 1;
    }
    if (x < 0 || x >= global->max_x || y < 0 || y >= global->max_y)
        return 0;
    if (global->maze[y][x] == '*') {
        global->maze[y][x] = 'o';

        if (solver(global, y + 1, x))
            return 1;
        if (solver(global, y, x + 1))
            return 1;
        if (solver(global, y - 1, x))
            return 1;
        if (solver(global, y, x -1))
            return 1;
        global->maze[y][x] = '*';
    }
    return 0;
}
