/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_revstr
*/

#include "../my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;
    char reverse[len];
    my_strcpy(reverse, str);

    for (; i <= len; i++) {
        str[i] = reverse[len - i - 1];
    }
    str[i] = '\0';
    return str;
}
