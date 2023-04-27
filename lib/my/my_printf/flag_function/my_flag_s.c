/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_s
*/

#include "../include/my_flags.h"

int flag_s(struct info info_t, va_list list)
{
    char *str = va_arg(list, char *);
    int len = my_strlen(str);
    if (len > info_t.precision && info_t.change_precision == 1)
        len = info_t.precision;
    if (len < info_t.width && info_t.align_text == 0) {
        info_t.width -= len;
        my_put_space(info_t);
    }
    for (int i = 0; i != len; i++) {
        my_putchar(str[i]);
    }
    if (len < info_t.width && info_t.align_text == 1) {
        info_t.width -= len;
        my_put_space(info_t);
    }
    return 0;
}
