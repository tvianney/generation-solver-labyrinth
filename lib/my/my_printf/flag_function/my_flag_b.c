/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_b
*/

#include "../include/my_flags.h"

int flag_b(struct info info_t, va_list list)
{
    int nbr = va_arg(list, int);
    int nbr_len = my_flags_numbers(info_t, nbr);

    if (nbr_len < info_t.width && info_t.align_text == 1) {
        my_putchar('1');
        my_putnbr_base(nbr, "01");
        info_t.width -= nbr_len;
        info_t.fill_with_0 = 0;

        my_put_space(info_t);
    } else {
        my_putchar('1');
        my_putnbr_base(nbr, "01");
    }
    return 0;
}
