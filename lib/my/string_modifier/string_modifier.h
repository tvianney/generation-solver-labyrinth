/*
** EPITECH PROJECT, 2023
** lib
** File description:
** string_modifier
*/

#ifndef STRING_MODIFIER_H
    #define STRING_MODIFIER_H

char *my_strcat(char const *dest, char *str);
char *my_strncat(char *dest, char const *src, int nb);

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);

char *my_strdup(char const *src);
char *my_strndup(char const *src, int len_word);

int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);

char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

#endif //STRING_MODIFIER_H
