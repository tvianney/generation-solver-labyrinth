/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_pourcent_verif
*/

#ifndef MY_POURCENT_VERIF_H_
    #define MY_POURCENT_VERIF_H_
    #include "../include/my_flags.h"

int verif_flags(const char *str, va_list list);
int verif_width(struct info info_t, va_list list, int i);
int verif_precision(struct info info_t, va_list list, int i);
int verif_type(struct info info_t, va_list list, int i);

#endif /* !MY_POURCENT_VERIF_H_ */
