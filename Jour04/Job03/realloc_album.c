#include <stdlib.h>
#include "./album.h"

struct album *realloc_album(struct album *albums, int current_size, int new_size) {
    struct album *new_albums = (struct album *)malloc(new_size * sizeof(struct album));
    if (new_albums == NULL) {
        return NULL;
    }

    for (int i = 0; i < current_size && i < new_size; ++i) {
        new_albums[i] = albums[i];
    }

    free(albums);

    return new_albums;
}
