int mx_strlen(const char *s) {
    int length = 0;        // початковий розмір ст — 0
    while (s[length] != '\0') { // поки не зустрінемо символ кінця стрічки        length++;          
    }
    return length;         
}
