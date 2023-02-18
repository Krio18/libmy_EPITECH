/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-killian.cottrelle
** File description:
** my_int_to_char
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | int to string.
 * @param str
 * @param nbr
 */
void my_sprintf(char *str, int nbr)
{
    int i = 0;
    if (nbr < 0) {
        str[i] = '-';
        i++;
        nbr = -nbr;
    }
    if (nbr == 0) {
        str[i] = '0';
        i++;
    }
    int j = i;
    for (; nbr > 0; nbr /= 10, i++)
        str[i] = (nbr % 10) + '0';
    str[i] = '\0';
    for (i--; j < i; j++, i--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}
