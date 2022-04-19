#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
        int plus;
        int space;
        int hash;
} flags_t;

/* _printf */
int _printf(const char *format, ...);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/*converter*/
char *convert(unsigned long int num, int base, int lowercase);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

#endif
