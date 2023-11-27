
#include <stdlib.h>

void my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
}

char **split(char *str, char *sep)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **dest;

    while (str[i] != '\0') {
        if (str[i] == sep[0]) {
            j++;
        }
        i++;
    }

    dest = malloc(sizeof(char *) * (j + 2));

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == sep[0]) {
            dest[k] = malloc(sizeof(char) * (i + 1));
            my_strncpy(dest[k], str, i);
            dest[k][i] = '\0';
            str = str + i + 1;
            i = 0;
            k++;
        }
        i++;
    }

    dest[k] = malloc(sizeof(char) * (i + 1));
    my_strncpy(dest[k], str, i);
    dest[k][i] = '\0';
    k++;

    dest[k] = NULL;

    return dest;
}