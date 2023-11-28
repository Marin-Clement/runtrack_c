#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("usage: %s string1 [string2 ...]\n", argv[0]);
        return 1;
    }

    char **strings = (char **)malloc((argc - 1) * sizeof(char *));
    if (strings == NULL) {
        perror("Error allocating memory");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        strings[i - 1] = strdup(argv[i]);
        if (strings[i - 1] == NULL) {
            perror("Error allocating memory");
            for (int j = 0; j < i - 1; j++) {
                free(strings[j]);
            }
            free(strings);
            return 1;
        }
    }

    qsort(strings, argc - 1, sizeof(char *), compare);

    for (int i = 0; i < argc - 1; i++) {
        write(1, strings[i], strlen(strings[i]));
        if (i < argc - 2) {
            write(1, " ", 1);
        }
        free(strings[i]);
    }
    write(1, "\n", 1);

    free(strings);

    return 0;
}
