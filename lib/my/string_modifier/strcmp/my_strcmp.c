/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(const char *s1, const char *s2)
{
    int len = my_strlen(s1);
    int i = 0;

    while (s1[i] == s2[i] && i < len) {
        i++;
    }
    return s1[i] - s2[i];
}
