/*
** EPITECH PROJECT, 2022
** Pool-Day8
** File description:
** my_str_to_word_array
*/

#include "../my.h"
#include "stdlib.h"

int char_in_str(char c, char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return 1;
    return 0;
}

int len_word(char *str, char *delim)
{
    int i = 0;
    for (; str[i] != '\0'; i++)
        if (char_in_str(str[i], delim))
            return i;
    return i;
}

int pos_next_word(char *str, char *delim)
{
    int cursor = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (char_in_str(str[i], delim))
            cursor++;
        else
            break;
    return cursor;
}

int count_word(char *str, char *delim)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] == '\0')
            break;
        if (char_in_str(str[i], delim) && !char_in_str(str[i + 1], delim))
            count++;
    }
    return count + 1;
}

char **my_str_to_word_array(char *str, char *delim)
{
    char **result;
    int len_array;
    int cursor = 0;

    if (char_in_str(str[0], delim))
        str = &str[pos_next_word(str, delim)];

    len_array = count_word(str, delim);
    result = malloc(sizeof(char *) * (len_array + 1));

    for (int word = 0; word < len_array; word++) {
        cursor = len_word(str, delim);
        result[word] = my_strndup(str, cursor);
        str = &str[cursor + 1];
        if (char_in_str(str[0], delim))
            str = &str[pos_next_word(str, delim)];
    }
    result[len_array] = NULL;
    return result;
}
