#include <unistd.h>

// Прототип функции mx_strlen
int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

