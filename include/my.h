/*
** EPITECH PROJECT, 2023
** Personnal lib in C
** File description:
** Librairie by BebeSniffeur
*/

#ifndef MY_H
    #define MY_H
/*=============================ARRAY FUNCTIONS===============================*/
    int len_array(char **array);
    char **arraydup(char **array);
    void free_array(char **array);
    char **my_str_to_word_array(char *str, char *delim);
    int my_show_word_array(char *const *tab, int line_size);
/*===========================================================================*/
/*==============================GET FUNCTIONS================================*/
    int my_getchar_nbr(char *str);
    int my_getnbr(char const *str);
    int my_nbr_len(int nbr);
    int my_strlen(char const *str);
/*===========================================================================*/
/*=============================PRINT FUNCTIONS===============================*/
    /*==========================PRINT NUMBERS============================*/
        void my_put_exponent(char c, double nb, int precision);
        void my_put_floatn(double nbr, int n);
        void my_put_nbr(int nbr);
        void my_put_unint(unsigned int nbr);
        void my_putnbr_base(int nb, char *str);
    /*==================================================================*/
    void my_putchar(char c);
    void my_putstr(char const *str);
    void my_puterror(char const *str);
/*===========================================================================*/
/*===============================STR IS WHAT=================================*/
    int my_str_isalpha(char const *str);
    int my_str_isalphanum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isnum(char const *str);
    int my_str_isprintable(char const *str);
    int my_str_isupper(char const *str);
    char *my_strstr(char *str, char const *to_find);
/*===========================================================================*/
/*=============================STRING MODIFIER===============================*/
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
/*===========================================================================*/
/*=============================OTHER FUNCTIONS===============================*/
    int my_printf(const char *format, ...);
    void my_round_float(double nb, int p);
/*===========================================================================*/
#endif
