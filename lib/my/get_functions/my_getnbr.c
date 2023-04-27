/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-leo.bauduin
** File description:
** mygetnbr
*/


int my_getnbr(char const *str)
{
    int count = 0;
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            count += 1;
        }
        result *= 10;
        result += str[i] - 48;
    }
    if (count < 0) {
        result *= -1;
    }
    return result;
}
