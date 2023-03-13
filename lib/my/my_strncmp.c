/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strncmp
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Compare x number of char between two string.
 * Return a int.
 * @param s1
 * @param s2
 * @param n
 * @return int
 */
int my_strncmp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return 84;
        if (s1[i] == '\0')
            return 0;
    }
    return 0;
}
