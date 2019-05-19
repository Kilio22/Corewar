/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** Shitty but fast printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "my_stdio.h"

static int print_flag(char mode, va_list list)
{
    int n_val = 0;
    char *str = NULL;

    if (mode == 'd') {
        str = my_itoa(va_arg(list, int));
        n_val = my_putstr(str);
        free(str);
        return (n_val);
    }
    if (mode == 's')
        return (my_putstr(va_arg(list, char *)));
    if (mode == 'c')
        return my_putchar(va_arg(list, int));
    if (mode == '%')
        return (my_putchar('c'));
    return (0);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int len = 0;

    va_start(list, format);
    while (*format) {
        if (*format == '%')
            len += print_flag(*++format, list);
        else
            len += my_putchar(*format);
        format++;
    }
    va_end(list);
    return (len);
}
