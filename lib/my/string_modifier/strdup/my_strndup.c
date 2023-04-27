/*
** EPITECH PROJECT, 2023
** for str to word array
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strndup(char const *src, int len_word)
{
    char *str = malloc(sizeof(char) * (len_word + 1));

    for (int i = 0; i < len_word && src[i] != '\0'; i++) {
        str[i] = src[i];
    }
    str[len_word] = '\0';
    return str;
}
