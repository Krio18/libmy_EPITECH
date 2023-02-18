/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-killian.cottrelle
** File description:
** my_str_to_world_array
*/

#include "my.h"

int count_words1(char *str)
{
    int count_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || ((str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' &&
        str[i] < 'a')) || str[i] > 'z') {
            count_word++;
            i++;
        }
    }
    count_word++;
    return count_word;
}

/**
 * @brief
 * #killian cottrelle | Converted a str in tab (1 line == 1 word).
 * Return a char**. Don't forget to free the tab.
 * @param str
 * @return char**
 */
char **my_str_to_word_array(char *str)
{
    int count_char = 0;
    int i;
    int j;
    char **tab = malloc(sizeof(char *) * (count_words1(str) + 1));
    tab[count_words1(str)] = NULL;
    for (int y = 0; y != count_words1(str); y++) {
        for (i = count_char, j = 0; (str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9');
        i++, j++)
            tab[y] = malloc(sizeof(char) * (j + 1));
        for (i = count_char, j = 0; (str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9');
        i++, j++)
            tab[y][j] = str[i];
        tab[y][j] = '\0';
        count_char = (i + 1);
    }
    return tab;
}
