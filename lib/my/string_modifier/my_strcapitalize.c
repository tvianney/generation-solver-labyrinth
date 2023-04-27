/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strcapitalize
*/

#include <stdio.h>

int my_strlen(char const *str);

void char_cap(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122) {
        str[i] -= 32;
    }
}

void char_lower(char *str, int i)
{
    if (str[i] >= 65 && str[i] <= 90) {
        str[i] += 32;
    }
}

int is_an_char(char *str, int i)
{
    if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122)
    && !(str[i] >= 48 && str[i] <= 57)) {
        return (0);
    }
    return (1);
}

char *my_strcapitalize(char *str)
{
    int len = my_strlen(str);

    if (is_an_char(str, 0) == 1) {
        char_cap(str, 0);
    }

    for (int i = 1; i < len; i++) {
        if ((str[i - 1] >= 48 && str[i - 1] <= 57) ||
        (str[i - 1] >= 97 && str[i - 1] <= 122)) {
            char_lower(str, i);
        }
        if (is_an_char(str, i - 1) == 0) {
            char_cap(str, i);
        }
    }
    return str;
}
