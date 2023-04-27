/*
** EPITECH PROJECT, 2022
** Pool-Day7
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *str, int nb)
{
    int dest_len = my_strlen(dest);
    int y = 1;
    int i = dest_len;

    for (; y <= nb; i++, y++) {
        dest[i] = str[y];
    }
    dest[i] = '\0';
    return dest;
}
