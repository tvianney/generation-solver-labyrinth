/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_flags
*/

#pragma once
#include <stdarg.h>
#include "info_before_type.h"
#include "../../my.h"

int flag_s(struct info info_t, va_list list);
int flag_big_s(struct info info_t, va_list list);
int flag_c(struct info info_t, va_list list);
int flag_e(struct info info_t, va_list list);
int flag_i_d(struct info info_t, va_list list);
int flag_o(struct info info_t, va_list list);
int flag_u(struct info info_t, va_list list);
int flag_x(struct info info_t, va_list list);
int flag_big_x(struct info info_t, va_list list);
int my_flags_numbers(struct info info_t, int nbr);
int flag_p(struct info info_t, va_list list);
int flag_b(struct info info_t, va_list list);
int flag_f(struct info info_t, va_list list);
int my_put_space(struct info info_t);
