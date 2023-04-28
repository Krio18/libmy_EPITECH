/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-killian.cottrelle
** File description:
** my_str_to_world_array
*/

#include "my.h"

char *clear(char *str)
{
    char *clear_str;
    int j = 0;
    int space = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] == '\t')
            str[i] = ' ';
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && (i == 0 || str[i - 1] == ' '))
            space++;
    }
    clear_str = malloc(sizeof(char) * (my_strlen(str) - space + 1));
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && (i == 0 || str[i - 1] == ' '))
            continue;
        clear_str[j] = str[i];
        j++;
    }
    for (;j > 0 && (clear_str[j - 1] == ' '); j--);
    clear_str[j] = '\0';
    return clear_str;
}
