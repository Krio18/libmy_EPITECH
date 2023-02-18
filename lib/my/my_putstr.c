/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_putstr
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a string.
 * @param str
 */
void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
