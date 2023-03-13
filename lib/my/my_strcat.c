/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strcat
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Concatenate 2 string in 1.
 * Return a char *.
 * @param dest
 * @param src
 * @return char*
 */
char *my_strcat(char *dest, char const *src)
{
    int i;
    int dest_len = my_strlen(dest);
    for (i = 0; src[i]; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}
