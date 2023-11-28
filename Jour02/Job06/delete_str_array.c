#include <stdlib.h>

void delete_str_array(char** str_array) {
    if (str_array == NULL) {
        return;
    }

    for (int i = 0; str_array[i] != NULL; i++) {
        free(str_array[i]);
    }

    free(str_array);

    str_array = NULL;
}
