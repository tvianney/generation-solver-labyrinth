/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strisprintable
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; (str[i] >= 32 && str[i] <= 127) && i < len; i++)
        count += 1;

    if (count == len) {
        return (1);
    }
    return (0);
}
