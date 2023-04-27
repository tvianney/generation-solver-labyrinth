/*
** EPITECH PROJECT, 2023
** Dante
** File description:
** generator
*/

#ifndef GENERATOR_H
    #define GENERATOR_H
    #include "my.h"
    #include <stdbool.h>
    #include "malloc.h"
    #define HORIZONTAL 0
    #define VERTICAL 1

typedef struct rect_s {
    bool dir;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    int hole_x;
    int hole_y;
    int rand;
} rect_t;

typedef struct global_s {
    bool orientation;
    int start_x;
    int start_y;
    int size_x;
    int size_y;
    int hole;
    int step;
    char **maze;
} global_t;

void create_empty_maze(global_t *global);
void maze_generator(global_t *global, rect_t *rect);
void create_horizontal_wall(global_t *global, rect_t *rect);
void create_vertical_wall(global_t *global, rect_t *rect);
int rand_pair_int(int min, int max);
int rand_impair_int(int min, int max);
int randint(int min, int max);

/*==========CHECK FUNCTION===========*/
int check_vert_hole(global_t *global, rect_t *rect, int hole);
int check_horiz_hole(global_t *global, rect_t *rect, int hole);
bool check_dir(rect_t *rect);
void check_pos_wall(global_t *global, rect_t *rect);
#endif //GENERATOR_H
