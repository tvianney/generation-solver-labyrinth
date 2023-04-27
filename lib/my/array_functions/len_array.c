/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** len_array
*/

int len_array(char **array)
{
    int i = 0;
    for (; array[i]; i++);
    return i;
}
