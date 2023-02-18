/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-killian.cottrelle
** File description:
** strcat
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
