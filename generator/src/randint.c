/*
** EPITECH PROJECT, 2023
** generator
** File description:
** randint
*/

#include <stdlib.h>
#include "generator.h"

int randint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
