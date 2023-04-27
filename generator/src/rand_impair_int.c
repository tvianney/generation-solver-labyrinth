/*
** EPITECH PROJECT, 2023
** generator
** File description:
** randint
*/

#include <stdlib.h>
#include "generator.h"

int rand_impair_int(int min, int max)
{
    int rand_nb = (rand() % (max - min + 1)) + min;

    if (rand_nb % 2 == 1)
        return rand_nb;
    if (rand_nb == max)
        return rand_nb - 1;
    if (rand_nb == min)
        return rand_nb + 1;

    rand_nb += randint(0, 1) ? -1 : 1;

    return rand_nb;
}
