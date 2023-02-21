/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-killian.cottrelle
** File description:
** my_getenv
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Takes the argument corresponding to the
 * name of the environment. Return a string.
 * @param name
 * @param envp
 * @return char*
 */
char *my_getenv(char *name, char **envp)
{
    size_t namelen = my_strlen(name);
    char *value = NULL;

    for (int y = 0; envp[y] != NULL; y++) {
        if (my_strncmp(name, envp[y], namelen) == 0 &&
        envp[y][namelen] == '=') {
            value = envp[y] + namelen + 1;
            break;
        }
    }

    return value;
}
