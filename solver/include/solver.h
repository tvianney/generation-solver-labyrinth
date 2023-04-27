/*
** EPITECH PROJECT, 2023
** Dante
** File description:
** solver
*/

#ifndef SOLVER_H
    #define SOLVER_H
    #include "my.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/fcntl.h>
    #include <sys/stat.h>
    #include <stdbool.h>
    #include <sys/resource.h>

    typedef struct global {
        int x;
        int y;
        int max_y;
        int max_x;
        int file_size;
        char **maze;

    } global_t;

    char **turn_maze_into_array(char *buffer, global_t *global);
    short solver(global_t *global, int y, int x);

#endif //SOLVER_H
