/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_c_C
*/

#include "../include/my_flags.h"

int flag_c(struct info info_t, va_list list)
{
    char c = va_arg(list, int);
    info_t.sign_number = 0;
    my_flags_numbers(info_t, c);
    if (info_t.align_text == 1) {
        my_putchar(c);
        info_t.width -= 1;
        info_t.fill_with_0 = 0;
        my_put_space(info_t);
    } else
        my_putchar(c);
    return 0;
}
