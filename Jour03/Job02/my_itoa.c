#include <stdlib.h>

char* my_itoa(int num) {
    int size = 1;
    int temp = num;
    while (temp / 10 != 0) {
        size++;
        temp /= 10;
    }

    char* str = (char*)malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;
    }

    int i = size - 1;
    while (num != 0) {
        str[i] = '0' + (num % 10);
        num /= 10;
        i--;
    }
    str[size] = '\0';

    return str;
}