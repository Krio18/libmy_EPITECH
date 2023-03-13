/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strcpy
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Copy a string into anther string(void).
 * return the modified string.
 * @param dest
 * @param src
 * @return char*
 */
char *my_strcpy(char *dest, char const *src)
{
    int i;
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
