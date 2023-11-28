#include <stdlib.h>
#include <string.h>

char** array_clone(char** array, int n) {
    int count = 0;
    while (array[count] != NULL) {
        count++;
    }

    if (n > count) {
        n = count;
    }

    char** clone = (char**)malloc((n + 1) * sizeof(char*));

    for (int i = 0; i < n; i++) {
        clone[i] = strdup(array[i]);
    }

    clone[n] = NULL;

    return clone;
}
