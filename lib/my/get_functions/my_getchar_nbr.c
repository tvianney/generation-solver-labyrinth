/*
** EPITECH PROJECT, 2022
** Rush_2
** File description:
** how_many_char_in_str
*/

int my_strlen(char const *str);
int is_an_char(char *str, int i);

int my_getchar_nbr(char *str)
{
    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++)
        if (is_an_char(str, i) == 1)
            count += 1;
    return count;
}
