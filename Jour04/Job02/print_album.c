#include "print_album.h"
#include <stdio.h>
#include <unistd.h>

void print_album(struct album *album) {
    if (album == NULL) {
        return;
    }

    char buffer[256];

    snprintf(buffer, sizeof(buffer), "\"%s\" by \"%s\" released in %d.\n", album->title, album->artist, album->release_year);

    write(STDOUT_FILENO, buffer, strlen(buffer));
}
