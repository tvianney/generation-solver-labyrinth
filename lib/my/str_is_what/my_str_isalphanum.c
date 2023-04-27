/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** my_str_isalphanum
*/

int my_strlen(char const *str);

int my_str_isalphanum(char const *str)
{

    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= '0' && str[i] <= '9'))
            count += 1;

    if (count == len)
        return 1;
    return 0;

}
