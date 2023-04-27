/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_u
*/

#include "../include/my_flags.h"

int flag_u(struct info info_t, va_list list)
{
    unsigned int nbr = va_arg(list, unsigned int);

    my_put_unint(nbr);
    return 0;
}
