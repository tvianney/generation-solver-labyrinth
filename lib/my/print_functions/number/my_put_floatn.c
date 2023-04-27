/*
** EPITECH PROJECT, 2022
** Rush_2
** File description:
** my_print_floatn
*/

#include "../../my.h"

void my_put_floatn(double nbr, int n)
{
    int float_to_int = nbr;
    nbr -= float_to_int;

    my_put_nbr(float_to_int);
    my_putchar('.');
    for (int i = 0; i < n; i++) {
        nbr *= 10;
        float_to_int = nbr;
        nbr -= float_to_int;
        my_put_nbr(float_to_int);
    }
}
