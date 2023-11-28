#include <string.h>

void func_to_array(char** strings, void (*func)(char*)) {
    for (int i = 0; strings[i] != NULL; i++) {
        func(strings[i]);
    }
}

void strtoupper(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void strtolower(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

void my_putstr(char* str) {
    write(1, str, strlen(str));
}