/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** my_compute_power_rec
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int powerCalc = 1;

    if (p < 0) {
        return 0;
    } else if (p == 0) {
        return 1;
    }
    if (p != 0) {
        powerCalc = nb * my_compute_power_rec(nb, p -1);
    }
    return powerCalc;
}
