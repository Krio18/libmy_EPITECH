/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-killian.cottrelle
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
    int dest_len = my_strlen(dest);
    int i;
    for (i = 0; src[i]; i++)
        dest[dest_len + i] = src[i];
    dest[i] = '\0';
    return dest;
}
