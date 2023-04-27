/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_nbr_len
*/

int my_nbr_len(int nbr)
{
    int i = 1;
    if (nbr < 0)
        nbr *= -1;
    while (nbr > 10) {
        nbr /= 10;
        i++;
    }
    return i;
}
