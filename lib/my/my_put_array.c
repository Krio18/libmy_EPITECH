/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-killian.cottrelle
** File description:
** my_put_array
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a tab/array.
 * @param tab
 */
void my_put_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        write(1, "\n", 1);
    }
}
