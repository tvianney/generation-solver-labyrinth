/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** info_before_type
*/

#ifndef INFO_BEFORE_TYPE_H_
    #define INFO_BEFORE_TYPE_H_
    struct info {
        const char *str;
        int letter;
        int align_text;
        int sign_number;
        int fill_with_0;
        int blank; // true o false
        int diez; // true o false
        int width;
        int precision;
        int change_precision;
        char size;
    };


#endif /* !INFO_BEFORE_TYPE_H_ */
