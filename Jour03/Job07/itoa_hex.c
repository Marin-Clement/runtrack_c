#include <stdlib.h>
#include <stdio.h>

char* itoa_hex(int num) {
    int size = 0;
    int temp = num;
    while (temp != 0) {
        size++;
        temp /= 16;
    }

    char* str = (char*)malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return NULL;
    }

    int i = size - 1;
    while (num != 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            str[i] = remainder + '0';
        } else {
            str[i] = remainder - 10 + 'A';
        }
        num /= 16;
        i--;
    }
    str[size] = '\0';

    return str;
}