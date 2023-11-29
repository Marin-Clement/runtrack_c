#include <stdlib.h>
#include <string.h>
#include "./album.h"

struct album *create_album(const char *artist, const char *title, int release_year) {
    struct album *new_album = (struct album *)malloc(sizeof(struct album));
    if (new_album == NULL) {
        return NULL;
    }

    new_album->artist = (char *)malloc((strlen(artist) + 1) * sizeof(char));
    new_album->title = (char *)malloc((strlen(title) + 1) * sizeof(char));
    if (new_album->artist == NULL || new_album->title == NULL) {
        free(new_album->artist);
        free(new_album->title);
        free(new_album);
        return NULL;
    }

    strcpy(new_album->artist, artist);
    strcpy(new_album->title, title);
    new_album->release_year = release_year;
    
    new_album->next = NULL;

    return new_album;
}

void free_album(struct album *album) {
    if (album != NULL) {
        free(album->artist);
        free(album->title);
        free(album);
    }
}
