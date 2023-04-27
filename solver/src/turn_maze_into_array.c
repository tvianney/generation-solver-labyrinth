/*
** EPITECH PROJECT, 2022
** dante
** File description:
** turn_maze_into_array.c
*/

#include "solver.h"

void check_char(char c)
{
    if (c != '*' && c != 'X') {
        printf("Wrong characters in maze\n");
        exit(84);
    }
}

void check_str_lenght(char *maze, int nb_x)
{
    if (my_strlen(maze) != nb_x) {
        printf("The maze is not a rectangle\n");
        exit(84);
    }
}

int get_nb_y(char *buffer, int nb_x, global_t *global)
{
    int nb_y = 1;

    for (int i = nb_x; i < global->file_size; i += nb_x + 1) {
        if (buffer[i] == '\n')
            nb_y++;
    }
    if (buffer[global->file_size - 1] == '\n') {
        printf("End of last line ending with a '\\n'\n");
        exit(84);
    }

    return nb_y;
}

void copy_word(char **maze, char *buffer, int y, int *j)
{
    int x = 0;

    while (buffer[*j] != '\n' && buffer[*j] != '\0') {
        check_char(buffer[*j]);
        maze[y][x] = buffer[*j];
        (*j)++;
        x++;
    }
    maze[y][x] = '\0';
}

char **turn_maze_into_array(char *buffer, global_t *global)
{
    int nb_x;
    int nb_y;
    char **maze;
    int y = 0;
    for (nb_x = 0; buffer[nb_x] != '\n' && buffer[nb_x] != '\0'; nb_x++);
    nb_y = get_nb_y(buffer, nb_x, global);
    maze = malloc(sizeof(char *) * (nb_y + 1));
    for (int j = 0; j <= (((nb_x + 1) * nb_y) - 1); j++, y++) {
        maze[y] = malloc(sizeof(char) * (nb_x + 1));
        copy_word(maze, buffer, y, &j);
        check_str_lenght(maze[y], nb_x);
    }
    maze[y] = NULL;
    global->max_x = nb_x;
    global->max_y = nb_y;
    if (maze[0][0] == 'X' || maze[nb_y - 1][nb_x - 1] == 'X') {
        printf("No path to the goal could be found!\n");
        exit(0);
    }
    return maze;
}
