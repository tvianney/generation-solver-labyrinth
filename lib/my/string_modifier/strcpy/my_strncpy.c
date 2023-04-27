/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strncpy
*/

void my_putstr(char *str);
void my_putchar(char c);
int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int count)
{
    int i = 0;
    int len = my_strlen(src);

    for (; i < count; i++) {
        if (i >= len) {
            dest[i] = '\0';
        }
        dest[i] = src[i];
        }
    return dest;
}
