/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for ( ; s1[i] == s2[i] && i < n - 1; i++);

    return s1[i] - s2[i];
}
