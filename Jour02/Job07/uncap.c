#include <stdlib.h>
#include <unistd.h>

int stringLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void toLowerAndPrint(const char *str) {
    int len = stringLength(str);

    char *lower = (char *)malloc(len + 1);

    if (lower == NULL) {
        return;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower[i] = str[i] + ('a' - 'A');
        } else {
            lower[i] = str[i];
        }
    }
    lower[len] = '\0';

    for (int i = 0; i < len; i++) {
        write(1, &lower[i], 1);
    }
    
    write(1, "\n", 1);

    free(lower);
}