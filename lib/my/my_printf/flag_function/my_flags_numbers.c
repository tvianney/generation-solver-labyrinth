/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_numbers
*/

#include "../include/my_flags.h"

int my_flags_numbers(struct info info_t, int nbr)
{
    int nbr_len = my_nbr_len(nbr);
    if (info_t.blank == 1) {
        my_putchar(' ');
        nbr_len += 1;
    }
    if (info_t.sign_number == 1) {
        if (nbr > 0) {
            my_putchar('+');
            nbr_len += 1;
        }
    }
    if (nbr_len < info_t.width && info_t.align_text == 0) {
        info_t.width -= nbr_len;
        my_put_space(info_t);
    }
    return nbr_len;
}
