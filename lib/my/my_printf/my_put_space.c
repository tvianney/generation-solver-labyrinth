/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_put_space
*/

#include "../my.h"
#include "include/info_before_type.h"

int my_put_space(struct info info_t)
{
    char c = ' ';
    if (info_t.fill_with_0 == 1)
        c = '0';
    for (int i = 0; i < info_t.width; i++)
        my_putchar(c);
    return 0;
}
