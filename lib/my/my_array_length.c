/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-killian.cottrelle
** File description:
** my_put_array_lenght
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Count the number of line in tab/array.
 * Return the length of the tab.
 * @param tab
 * @return int
 */
int my_array_length(char **tab)
{
    int length = 0;
    for (int i = 0; tab[i] != NULL; i++, length++);
    return length;
}
