/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_str_isnum
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; (str[i] >= 48 && str[i] <= 57) && str[i] != '\0'; i++)
        count++;

    if (count == len)
        return (1);
    return (0);
}
