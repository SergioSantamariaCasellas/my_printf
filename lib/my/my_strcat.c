/*
** EPITECH PROJECT, 2024
** hola
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *str)
{
    int length = my_strlen(dest);

    dest = dest + length;
    while (*str){
        *dest = *str;
        str++;
        dest++;
    }
    dest++;
    *dest = '\0';
    return dest;
}
