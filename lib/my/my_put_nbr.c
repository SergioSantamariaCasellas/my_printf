/*
** EPITECH PROJECT, 2024
** hola
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../../include/my.h"

void my_put_nbr(long nb, int putzero)
{
    char buffer[24] = "";
    int index = 0;
    long nb_abs = ABS(nb);

    while (nb_abs > 0) {
        buffer[index] = (nb_abs % 10) + '0';
        nb_abs /= 10;
        index++;
    }
    if (putzero == 1) {
        buffer[my_strlen(buffer)] = '0';
        count++;
    }
    if (nb < 0) {
        buffer[my_strlen(buffer)] = '-';
        count++;
    }
    my_revstr(buffer);
    my_putstr(buffer);
    count += my_strlen(buffer);
}
