#include "./album.h"

void push_front_album(struct album **list, struct album *new_album) {
    new_album->next = *list;
    *list = new_album;
}
