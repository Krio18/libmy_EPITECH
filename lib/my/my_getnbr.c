/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-killian.cottrelle
** File description:
** my_getnbr
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Take and transforme a number in str to int.
 * Return a number.
 * @param str
 * @return int
 */
int my_getnbr(char const *str)
{
    int result = 0;
    int isneg = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            isneg = 1;
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 + (str[i] - '0');
    }
    if (isneg == 1)
        result *= -1;
    return result;
}
