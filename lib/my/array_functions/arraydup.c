/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** my_arraydup
*/

#include <stdlib.h>
#include "../my.h"

char **arraydup(char **array)
{
    int l_array = len_array(array);
    char **new_array = malloc(sizeof(char *) * (l_array + 1));

    for (int i = 0; i < l_array && array[i] != NULL; i++)
        new_array[i] = my_strdup(array[i]);
    new_array[l_array] = NULL;
    return new_array;
}
