#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_integer(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);

int main(void)
{
    printf("Hello % super mario");
    return (0);
}

void print_all(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int i = 0;
    int is_percent = 0;

    while (format[i]) {
        switch (is_percent) {
            case 1:
                is_percent = 0;
                switch (format[i]) {
                    case 'd':
                        print_integer(args);
                        break;
                    case 's':
                        print_string(args);
                        break;
                    case 'c':
                        print_char(args);
                        break;
					case '%':
						putchar('%');
						break;
                    default:
                        putchar('%');
                        putchar(format[i]);
                        break;
                }
                break;
            case 0:
                if (format[i] == '%') {
                    is_percent = 1;
                } else {
                    putchar(format[i]);
                }
                break;
        }
        i++;
    }

    va_end(args);
}


void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}


void print_string(va_list args)
{
	printf("%s", va_arg(args, char *));
}


void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


