#include <stdlib.h>
#include <string.h>

void sort(char* strings[]) {
    int i, j;
    char* temp;

    int size = 0;
    while (strings[size] != NULL) {
        size++;
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}