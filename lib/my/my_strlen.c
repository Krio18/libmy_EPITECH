/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_strlen
*/

/**
 * @brief
 * #killian cottrelle | Count the length of a string.
 * Return the length of the string.
 * @param str
 * @return int
 */
int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i] != 0; i++);
    return i;
}
