/*
** EPITECH PROJECT, 2022
** myprintf
** File description:
** my_printf_p
*/

#include "../include/my_flags.h"

int flag_p(struct info info_t, va_list list)
{
    int var = va_arg(list, int);
    my_putchar('0');
    my_putchar('x');
    my_putnbr_base(var, "0123456789abcdef");
    return 1;
}
