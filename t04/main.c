#include <stdio.h>

// Прототип функции mx_strlen
int mx_strlen(const char *s);

int main(void) {
    const char *test_string = "Hello, world!";
    int length = mx_strlen(test_string);
    printf("Length of '%s' is %d\n", test_string, length);
    return 0;
}

