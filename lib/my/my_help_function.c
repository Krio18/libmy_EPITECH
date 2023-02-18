/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-killian.cottrelle
** File description:
** help_fonction
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
