#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct mystr - pointer to function with corresponding letter
 * @letter: specifier
 * @func: print argument
 */
typedef struct mystr
{
	char *letter;
	int (*func)(va_list);
} mystr;
int _putchar(char c);

#endif
