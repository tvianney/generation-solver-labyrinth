/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flag_S
*/

#include "../include/my_flags.h"

static int my_printablechar(char c)
{
    if (c >= 32 && c <= 127)
        return 1;
    return 0;
}

void my_putzero(int c)
{
    if (c < 8) {
        my_putchar('0');
        my_putchar('0');
    }
    if (c < 16)
        my_putchar('0');
}

int flag_big_s(struct info info_t, va_list list)
{
    char const *str = va_arg(list, char *);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (my_printablechar(str[i]) == 0) {
            my_putchar(92);
            my_putzero(str[i]);
            my_putnbr_base(str[i], "01234567");
        } else
            my_putchar(str[i]);
    }
    return 0;
}
