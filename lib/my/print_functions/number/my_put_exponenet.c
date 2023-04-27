/*
** EPITECH PROJECT, 2022
** printChar
** File description:
** my_printablechar
*/

#include "../../my.h"
#include <stdio.h>

void my_put_exponent(char c, double nb, int precision)
{
    int y = 0, i = 0;
    char sign = '+';
    int int_nb = nb;
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    for (; nb > 10; i++) nb /= 10;

    for (; int_nb == 0; i++) {
        nb *= 10;
        int_nb = nb;
        sign = '-';
    }
    my_round_float(nb, precision);
    my_putchar(c);
    my_putchar(sign);
    (y < 10) ? my_putchar('0') : 0;
    my_put_nbr(i);
}
