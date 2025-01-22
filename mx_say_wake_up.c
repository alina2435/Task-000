#include <unistd.h>

void mx_say_wake_up() {
    write(1, "Wake up, Neo...\n", 16);
}

