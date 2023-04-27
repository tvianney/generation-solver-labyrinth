/*
** EPITECH PROJECT, 2023
** generator
** File description:
** check_dir
*/

#include "generator.h"

bool check_dir(rect_t *rect)
{
    if (rect->end_y - rect->start_y <= 3 && rect->end_x - rect->start_x > 2)
        return VERTICAL;
    if (rect->end_x - rect->start_x <= 3 && rect->end_y - rect->start_y > 2)
        return HORIZONTAL;
    if (rect->end_x - rect->start_x < 2)
        return VERTICAL;
    if (rect->end_y - rect->start_y < 2)
        return HORIZONTAL;
    return randint(HORIZONTAL, VERTICAL);
}
