#include "mx_printchar.h"

void mx_print_alphabet(void) {
    char letter;
    for (int i = 0; i < 26; i++) {
        if (i % 2 == 0) {
            letter = 'A' + i; // Чётные буквы в верхнем регистре
        } else {
            letter = 'a' + i; // Нечётные буквы в нижнем регистре
        }
        mx_printchar(letter);
    }
    mx_printchar('\n'); // Добавляем переход на новую строку
}


