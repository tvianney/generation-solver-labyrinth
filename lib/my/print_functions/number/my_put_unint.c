/*
** EPITECH PROJECT, 2022
** my_decimal_nonsigne.c
** File description:
** print unsigned int
*/

#include "../../my.h"

void my_put_unint(unsigned int nbr)
{
    if (nbr < 0) {
        my_putchar(45);
        nbr = nbr * -1;
    }
    if (nbr > 10) {
        my_put_unint(nbr / 10);
    }
    my_putchar(nbr % 10 + 48);
}
