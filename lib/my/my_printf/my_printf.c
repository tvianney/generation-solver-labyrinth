/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/

#include "my_pourcent_verif/my_pourcent_verif.h"

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i += verif_flags(&format[i], list);
        } else
            my_putchar(format[i]);
    }
    va_end(list);
    return i;
}
