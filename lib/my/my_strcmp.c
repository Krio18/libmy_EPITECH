/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strcmp
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Compare two string.
 * Return 1 if the string are different, else return 0.
 * @param src1
 * @param src2
 * @return int
 */
int my_strcmp(char const *src1, char const *src2)
{
    int len1 = my_strlen(src1);
    int len2 = my_strlen(src2);
    if ((len1 > len2) || (len1 < len2))
        return 1;
    for (int i = 0; src1[i]; i++) {
        if (src1[i] != src2[i])
            return 1;
    }
    return 0;
}
