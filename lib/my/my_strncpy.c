/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strncpy
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Copy x number of char and put it into anther string.
 * Return a char *.
 * @param dest
 * @param src
 * @param n
 * @return char*
 */
char *my_strncpy(char *dest, const char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}
