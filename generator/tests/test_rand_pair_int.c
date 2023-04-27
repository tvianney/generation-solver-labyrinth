/*
** EPITECH PROJECT, 2023
** generator
** File description:
** randint
*/

#include "../include/generator.h"
#include <criterion/criterion.h>
#include "time.h"

Test (random_pair_int, test_function_randint) {
    int max = 10;
    int min = 1;
    srand(time(NULL));
    int rand_nb = rand_pair_int(min, max);
    cr_assert(rand_nb % 2 == 0);
}

Test (random_pair_int, test_function_randint2) {
    int max = 10;
    int min = 0;
    srand(time(NULL));
    int rand_nb = rand_pair_int(min, max);
    cr_assert(rand_nb % 2 == 0);
}

Test (random_pair_int, test_function_randint3) {
    int max = 15;
    int min = 1;
    srand(time(NULL));
    int rand_nb = rand_pair_int(min, max);
    cr_assert(rand_nb % 2 == 0);
}

Test (random_pair_int, test_function_randint4) {
    int max = 151;
    int min = 65;
    srand(time(NULL));
    int rand_nb = rand_pair_int(min, max);
    cr_assert(rand_nb % 2 == 0);
}
