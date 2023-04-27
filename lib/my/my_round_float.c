/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_round_float
*/

#include "my.h"

void my_round_float(double nb, int p)
{
    int int_nb = (int) nb;
    double temp = nb, replace = 0;
    temp -= int_nb;
    for (int i = 0; i <= p; i++) {
        temp *= 10;
        int_nb = (int) temp;
        temp -= int_nb;
    }
    if (int_nb >= 5) {
        replace = 1.0;
        for (int j = 0; j < p; j++)
            replace /= 10;
    }
    nb += replace;
    my_put_floatn(nb, p);
}
