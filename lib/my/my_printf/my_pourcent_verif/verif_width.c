/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_verif_width
*/

#include "my_pourcent_verif.h"

int verif_width(struct info info_t, va_list list, int i)
{
    int width = 1;
    const char *str = info_t.str;

    if (str[i] >= '0' && str[i] <= '9') {
        width = str[i] - 48;
        for (i += 1; str[i] >= '0' && str[i] <= '9'; ++i) {
            width *= 10;
            width += (str[i] - 48);
        }
    }
    info_t.width = width;
    i = verif_precision(info_t, list, i);
    return i;
}
