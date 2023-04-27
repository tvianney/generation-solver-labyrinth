/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** free_array
*/

#include "malloc.h"

void free_array(char **array)
{
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
