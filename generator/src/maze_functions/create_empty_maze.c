/*
** EPITECH PROJECT, 2023
** generator
** File description:
** create_maze_no_wall
*/

#include "generator.h"

static char *fill_line(int end, char const symbol)
{
    char *line = malloc(sizeof(char) * (end + 1));

    for (int x = 0; x < end; x++)
        line[x] = symbol;
    line[end] = '\0';
    return line;
}

void create_empty_maze(global_t *global)
{
    char **maze = malloc(sizeof(char *) * (global->size_y + 1));

    for (int line = 0; line < global->size_y; line++)
        maze[line] = fill_line(global->size_x, '*');
    maze[global->size_y] = NULL;
    global->maze = maze;
}
