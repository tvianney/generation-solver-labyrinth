/*
** EPITECH PROJECT, 2023
** lib
** File description:
** array_functions
*/

#ifndef ARRAY_FUNCTIONS_H
    #define ARRAY_FUNCTIONS_H

int len_array(char **array);
char **arraydup(char **array);
void free_array(char **array);
char **my_str_to_word_array(char *str, char *delim);
int my_show_word_array(char *const *tab);

#endif //ARRAY_FUNCTIONS_H
