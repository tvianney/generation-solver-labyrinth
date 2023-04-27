/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_e_E
*/

#include "../include/my_flags.h"

int flag_e(struct info info_t, va_list list)
{
    double nbr = va_arg(list, double);
    my_flags_numbers(info_t, nbr);
    int nbr_len = 6 + info_t.precision;

    if (nbr_len < info_t.width && info_t.align_text == 1) {
        my_put_exponent(info_t.letter, nbr, info_t.precision);
        info_t.width -= nbr_len;
        info_t.fill_with_0 = 0;
        my_put_space(info_t);
    } else
        my_put_exponent(info_t.letter, nbr, info_t.precision);
    return 0;
}
