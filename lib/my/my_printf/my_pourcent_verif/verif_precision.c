/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_verif_precision
*/

#include "my_pourcent_verif.h"

int verif_precision(struct info info_t, va_list list, int i)
{
    int precision = 6;
    const char *str = info_t.str;


    if (str[i] == '.' && str[i + 1] >= '0' && str[i + 1] <= '9') {
        info_t.change_precision = 1;
        i++;
        precision = str[i] - 48;
        i++;
        for (; str[i] >= '0' && str[i] <= '9'; ++i) {
            precision *= 10;
            precision += (str[i] - 48);
        }
    }
    info_t.precision = precision;
    i = verif_type(info_t, list, i);
    return i;
}
