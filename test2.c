#include <stdarg.h>
#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'c') {
                char c = va_arg(args, int);
                _putchar(c);
                count++;
            } else if (*p == 's') {
                char *str = va_arg(args, char *);
                for (const char *q = str; *q != '\0'; q++) {
                    _putchar(*q);
                    count++;
                }
            } else if (*p == '%') {
                _putchar('%');
                count++;
            }
        } else {
            _putchar(*p);
            count++;
        }
    }

    va_end(args);
    return count;
}

int main() {
    int count = _printf("The %c is %s%% done.\n", 'A', "50");
    printf("Total characters printed: %d\n", count);
    return 0;
}
