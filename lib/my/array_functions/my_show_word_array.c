/*
** EPITECH PROJECT, 2022
** Pool-Day8
** File description:
** my_show_word_array
*/

#include <unistd.h>
#include "../my.h"

int my_show_word_array(char *const *tab, int line_size)
{
    for (int i = 0; tab[i] != NULL; i++) {
        write(1, tab[i], line_size);
        if (tab[i + 1] != NULL)
            write(1, "\n", 1);
    }
    return 0;
}
