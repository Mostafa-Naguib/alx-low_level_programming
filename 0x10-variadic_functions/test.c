#include <stdio.h>
#include <stdarg.h>

void print_integer(va_list args) {
    printf("%d", va_arg(args, int));
}

void print_string(va_list args) {
    printf("%s", va_arg(args, char *));
}

void print_character(va_list args) {
    printf("%c", va_arg(args, int));
}

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1) != '\0') {
            format++; // Move past '%'
            if (*format == 'd') {
                print_integer(args);
            } else if (*format == 's') {
                print_string(args);
            } else if (*format == 'c') {
                print_character(args);
            } else {
                putchar('%');
                putchar(*format);
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    int num = 42;
    char str[] = "Hello, World!";
    char ch = 'A';

    my_printf("Integer: %d, String: %s, Character: %c\n", num, str, ch);

    return 0;
}

