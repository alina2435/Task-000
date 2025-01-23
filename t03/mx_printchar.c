#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1); // Используем функцию write для вывода символа
}

