/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-killian.cottrelle
** File description:
** my_strdmp
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | duplique a string into anther string(void).
 * return the modified string.
 * @param str
 * @return char*
 */
char *my_strdup(char *str)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
    new_str[my_strlen(str)] = '\0';
    new_str = my_strcpy(new_str, str);
    return new_str;
}
