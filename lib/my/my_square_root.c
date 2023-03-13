/*
** EPITECH PROJECT, 2023
** libmy_EPITECH
** File description:
** my_square_root
*/

#include "my.h"

/**
 * @brief
 * #killian cottrelle | Calculed the square root without lib math.
 * Return a number.
 * @param nbr
 * @return double
 */
double square_root(double nbr)
{
    double low = 0;
    double high = nbr;
    double mid;
    double error = 0.00001;

    while (high - low > error) {
        mid = (low + high) / 2;
        (mid * mid > nbr) ? (high = mid) : (low = mid);
    }
    return low;
}
