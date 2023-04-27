/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_str_isalpha
*/

int my_strlen(char const *str);

int my_str_isalpha(char const *str)
{
    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= 'a' && str[i] <= 'z'))
            count += 1;

    if (count == len)
        return 1;
    return 0;
}
