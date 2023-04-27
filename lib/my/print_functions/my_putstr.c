/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_putstr
*/

#include "../my.h"

void my_putstr(char const *str)
{
    int len = my_strlen(str);
    for (int i = 0; i != len; i++) {
        my_putchar(str[i]);
    }
}
