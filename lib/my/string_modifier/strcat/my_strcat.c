/*
** EPITECH PROJECT, 2022
** Pool-Day7
** File description:
** my_strcat
*/

#include "../../my.h"
#include <stdlib.h>

char *my_strcat(char const *dest, char *str)
{
    int y;
    int i = 0;
    int (*len)(const char *);
    char *result;

    len = &my_strlen;
    result = malloc(sizeof(char) * (len(dest) + len(str) + 1));

    for (y = 0; dest[y] != '\0'; i++, y++)
        result[i] = dest[y];
    for (y = 0; str[y] != '\0'; i++, y++)
        result[i] = str[y];
    result[i] = '\0';
    return result;
}
