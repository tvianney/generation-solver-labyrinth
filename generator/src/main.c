/*
** EPITECH PROJECT, 2023
** Generator map
** File description:
** Dante generation maze
*/

#include <stdlib.h>
#include <time.h>
#include "generator.h"

static int handling_errors(int ac, char *av[])
{
    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        my_putstr("./generator x y\n\tx and y must be number\n"); exit(0);
    }
    if (ac > 4) {
        my_puterror("generator: Too many args retry with -h.\n"); exit(84);
    }
    if (ac == 4 && my_strcmp(av[3], "perfect")) {
        my_puterror("generator: The third argument = empty or perfect.\n");
        exit(84);
    }
    if (ac < 3) {
        my_puterror("generator: Few arguments, retry with -h.\n"); exit(84);
    }
    if (!my_str_isnum(av[1]) || !my_str_isnum(av[2])) {
        my_puterror("generator: x and y must be number not alpha.\n");
        exit(84);
    }
    if (ac == 4 && !my_strcmp(av[3], "perfect"))
        return 1;
    return 0;
}

static void init_struct(global_t *global, rect_t *rect)
{
    global->start_x = 0;
    global->start_y = 0;
    global->hole = 0;
    global->step = 0;
    rect->start_y = 0;
    rect->start_x = 0;
}

static void unperfect_maze(global_t *global)
{
    int rand_loop = randint(0, global->size_x + global->size_y / randint(0, 9));

    for (int i = 0; i < rand_loop; i++) {
        int rand_x = randint(0, global->size_x - 1);
        int rand_y = randint(0, global->size_y - 1);
        if (global->maze[rand_y][rand_x] == 'X')
            global->maze[rand_y][rand_x] = '*';
    }
}

int main(int ac, char *av[])
{
    global_t global;
    rect_t rect;
    bool perfect = false;
    init_struct(&global, &rect);
    perfect = handling_errors(ac, av);

    srand(time(NULL));

    global.size_x = my_getnbr(av[1]);
    global.size_y = my_getnbr(av[2]);
    rect.end_x = global.size_x;
    rect.end_y = global.size_y;
    create_empty_maze(&global);
    maze_generator(&global, &rect);
    if (!perfect)
        unperfect_maze(&global);
    my_show_word_array(global.maze, global.size_x);
    free_array(global.maze);
    return 0;
}
