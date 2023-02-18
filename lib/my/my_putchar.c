/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** write char
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Print a character.
 * @param c
 */
void my_putchar(char c)
{
    write(1, &c, 1);
}
