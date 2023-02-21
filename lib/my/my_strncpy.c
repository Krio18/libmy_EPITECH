/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-killian.cottrelle
** File description:
** my_strncmp
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
