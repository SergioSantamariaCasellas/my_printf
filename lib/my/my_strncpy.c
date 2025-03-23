/*
** EPITECH PROJECT, 2024
** hola
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    if (my_strlen(src) > n){
        for (i = 0; i < n; i++) {
            dest[i] = src[i];
        }
    }
    if (my_strlen(src) <= n){
        for (i = 0; src[i] != '\0'; i++) {
            dest[i] = src[i];
        }
        dest[i] = '\0';
    }
    return dest;
}
