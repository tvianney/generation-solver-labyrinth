/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_x
*/

#include "../include/my_flags.h"

int flag_x(struct info info_t, va_list list)
{
    unsigned int nbr = va_arg(list, unsigned int);
    info_t.sign_number = 0;
    int nbr_len = my_flags_numbers(info_t, nbr);
    if (nbr > 4294967295)
        my_putstr("FFFFFFFF");
    if (nbr_len < info_t.width && info_t.align_text == 1) {
        my_putnbr_base(nbr, "0123456789abcdef");
        info_t.width -= nbr_len;
        info_t.fill_with_0 = 0;
        my_put_space(info_t);
    } else
        my_putnbr_base(nbr, "0123456789abcdef");
    return 0;
}
