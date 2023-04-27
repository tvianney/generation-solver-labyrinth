/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_putnbr_base
*/

#include "../../my.h"

void my_putnbr_base(int nb, char *str)
{
    int len = my_strlen(str);
    int temp = nb % len;

    if (nb > len) {
        my_putnbr_base(nb / len, str);
    }
    my_putchar(str[temp]);
}
