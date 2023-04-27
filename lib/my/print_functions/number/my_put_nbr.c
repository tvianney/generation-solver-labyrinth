/*
** EPITECH PROJECT, 2022
** Pool-Day3
** File description:
** my_put_nbr
*/

void my_putchar(char c);

void my_put_nbr(int nbr)
{
    int neg = 0;

    if (nbr < 0 && nbr == -2147483648) {
        my_putchar(45);
        nbr = (nbr + 1) * -1;
        neg = 1;
    } else if (nbr < 0) {
        my_putchar(45);
        nbr *= -1;
    }
    if (nbr >= 10) {
        my_put_nbr(nbr / 10);
    }
    if (neg == 1) {
        my_putchar(nbr % 10 + 48 + 1);
        neg = 0;
    } else
        my_putchar(nbr % 10 + 48);
}
