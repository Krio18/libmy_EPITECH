/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_help_function
*/

#include "my.h"

/**
 * @brief
 * killian cottrelle | Compared if the function is != 0.
 * @param av
 */
void help(char **av)
{
    if (my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr("\tTEXT\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("\tTEXT\n.");
        my_putstr("\tTEXT\n");
    }
}
