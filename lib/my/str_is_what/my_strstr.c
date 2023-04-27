/*
** EPITECH PROJECT, 2022
** Pool-Day6
** File description:
** my_strstr
*/

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(str), i = 0, y = 0;
    int len_find = my_strlen(to_find);
    if (len < len_find) {
        return "Invalid Size\n";
    }
    while (i < len || y < len_find) {
        if (str[i] == to_find[y]) {
            y += 1;
        } else {
            i -= y;
            y = 0;
        }
        i++;
        if (y == len_find)
            return &str[(i - y)];
    }
    return "Invalid Size\n";
}
