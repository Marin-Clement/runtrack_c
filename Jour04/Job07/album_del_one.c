#include <stdlib.h>
#include "./album.h"

void album_del_one(struct album **list, struct album *target_album) {
    struct album *current = *list;
    struct album *prev = NULL;

    while (current != NULL && current != target_album) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return;
    }

    if (prev == NULL) {
        *list = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}
