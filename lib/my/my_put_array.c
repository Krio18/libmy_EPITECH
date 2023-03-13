/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
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
    int count = 0;
    for (int i = 0; tab[i] != NULL; i++)
        count++;
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        if (i == count - 1)
            my_strcat(tab[i], "\0");
        else
            write(1, "\n", 1);
    }
}

