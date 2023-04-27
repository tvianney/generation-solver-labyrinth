/*
** EPITECH PROJECT, 2022
** my_add_type
** File description:
** my_verif_type
*/

#include "my_pourcent_verif.h"

int verif_type(struct info info_t, va_list list, int i)
{
    info_t.letter = info_t.str[i];
    if (info_t.letter == '%') {
        my_putchar('%');
        return i;
    }
    char type[] = {'c', 'C', 'd', 'i', 's', 'S', 'u', 'o', 'x',
    'X', 'e', 'E', 'p', 'b', 'f'};
    int (*trigerf[])(struct info info_t, va_list list) = {flag_c, flag_c,
    flag_i_d, flag_i_d, flag_s, flag_big_s, flag_u, flag_o, flag_x,
    flag_big_x, flag_e, flag_e, flag_p, flag_b, flag_f};

    for (int j = 0; type[j] != '\0'; j++) {
        if (type[j] == info_t.str[i]) {
            i += (trigerf[j])(info_t, list);
            return i;
        }
    }
    return i;
}
