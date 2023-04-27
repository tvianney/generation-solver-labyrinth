/*
** EPITECH PROJECT, 2023
** Solver
** File description:
** Solver labyrinthe
*/

#include "solver.h"

void increase_rec_limit(void)
{
    struct rlimit rec_limit;
    getrlimit(RLIMIT_STACK, &rec_limit);
    rec_limit.rlim_cur = 2000000000;
    setrlimit(RLIMIT_STACK, &rec_limit);
}

void read_file(global_t *global, char *str)
{
    struct stat sd;
    int fd = open(str, O_RDONLY);

    if (stat(str, &sd) == -1 || fd == -1) {
        printf("Error with the file\n");
        exit(84);
    }

    char *buffer = malloc(sizeof(char) * (sd.st_size + 1));

    read(fd, buffer, sd.st_size);
    close(fd);

    if (buffer[0] == '\0') {
        printf("File is empty\n");
        exit(84);
    }
    buffer[sd.st_size] = '\0';
    global->file_size = sd.st_size;
    global->maze = turn_maze_into_array(buffer, global);
}

int main(int argc, char **argv)
{
    global_t global;
    int x = 0;
    int y = 0;

    read_file(&global, argv[1]);
    increase_rec_limit();

    if (!solver(&global, y, x)) {
        printf("No path to the goal could be found!\n");
        exit(0);
    }
    for (int i = 0; i < global.max_y; i++) {
        if (i < global.max_y - 1)
            printf("%s\n", global.maze[i]);
        else
            printf("%s", global.maze[i]);
    }
    return 0;
}
