/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-killian.cottrelle
** File description:
** my_str_to_world_array
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle
 * @param str
 * @return int
 */
int count_words(char *str)
{
    int count_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            count_word++;
    }
    count_word++;
    return count_word;
}

/**
 * @brief
 * #killian cottrelle | Take char * and scale it in char **.
 * Return a char **.
 * @param str
 * @return char**
 */
char **my_str_to_tab(char *str)
{
    char **tab = malloc(sizeof(char *) * (count_words(str) + 1));
    int i = 0;
    int j = 0;

    tab[count_words(str)] = NULL;
    for (int y = 0; y < count_words(str); y++) {
        for(i = j; str[i] != '\n' && str[i] != '\0'; i++);
        tab[y] = malloc(sizeof(char) * (i - j + 1));
        for (i = j; str[i] != '\n' && str[i] != '\0'; i++)
            tab[y][i - j] = str[i];
        tab[y][i - j] = '\0';
        j = i + 1;
    }
    return tab;
}
