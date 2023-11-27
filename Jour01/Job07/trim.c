#include <stdio.h>
#include <stdlib.h>

char *trim(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t') {
            j++;
        }
        i++;
    }

    dest = malloc(sizeof(char) * (j + 1));

    i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t') {
            dest[k] = str[i];
            k++;
        }
        i++;
    }

    dest[k] = '\0';

    return dest;
}