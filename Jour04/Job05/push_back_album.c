#include "./album.h"
#include <stdlib.h>

void push_back_album(struct album *list, struct album *new_album) {
    struct album *current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_album;
    new_album->next = NULL;
}
