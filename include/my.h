/*
** EPITECH PROJECT, 2024
** hola
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#ifndef MY_H_
    #define MY_H_
    #define ABS(value) (value < 0) ? (-value) : (value)
    #define CASES "csdi%feuoxEXpg"
/*#define    void (*functions[5])(va_list *, int *) = {&char_arg, &str_arg,
  &int_arg, &int_arg, &percent_percent};*/
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <limits.h>
extern int count;
int my_isneg(int nb);
void my_swap(int *a, int *b);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
//display functions
void my_putchar(char c);
int my_putstr(char const *str);
void my_put_nbr(long nb, int putzero);
int my_put_float(double num);
int print_decimal(double decimal);
int put_scientific(double num, int upper);
void put_scientific2(int div_ten, int mult_ten, double num, int upper);
void get_power(int *div_ten, int *mult_ten, double *num);
int my_put_uint(unsigned long nb);
static int print_zeros(int n);
int convert_to_octal(int decimal);
int convert_to_hexadecimal(int num, int upper);
int put_pointer(void *pt);
char *fill_hex(unsigned long addr, char *h_chars, char *h, int *i);
void g_arg(va_list *arg_list);
//printf
int my_printf(char *format, ...);
void detected_percent(va_list *arg_list, char *s, int *i);
//conversion functions
void char_arg(va_list *arg_list);
void str_arg(va_list *arg_list);
void int_arg(va_list *arg_list);
void float_arg(va_list *arg_list);
void percent_percent(va_list *arg_list);
void arg_to_scientific(va_list *arg_list);
void uint_arg(va_list *arg_list);
void oct_arg(va_list *arg_list);
void hex_arg_lower(va_list *arg_list);
void hex_arg_upper(va_list *arg_list);
void arg_to_scientific_upper(va_list *arg_list);
void pointer_arg(va_list *arg_list);
#endif
