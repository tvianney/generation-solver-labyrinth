/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_verif_flags
*/

#include "my_pourcent_verif.h"

int verif_flags(const char *str, va_list list)
{
    struct info info_t = {str, 0, 0, 0, 0, 0, 1, 6, 0, ' '};
    int i = 0;
    for (int j = 1; str[j] == '-' || str[j] == '+' || str[j] == '0'
    || str[j] == '#' || str[j] == ' '; ++j) {
        switch (str[j]) {
            case '-':info_t.align_text = 1;i++;break;
            case '+':info_t.sign_number = 1;i += 1;break;
            case '0':info_t.fill_with_0 = 1;i += 1;break;
            case '#':info_t.diez = 1;i += 1;break;
            case ' ':info_t.blank = 1;i += 1;break;
            default: break;
        }
    }
    i = verif_width(info_t, list, i + 1);
    return i;
}
