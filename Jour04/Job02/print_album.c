#include <unistd.h>
#include <string.h>
#include "./album.h"

void print_album(const struct album *album) {
    if (album != NULL) {
        char buffer[256];

        int length = snprintf(buffer, sizeof(buffer), "\"%s\" by \"%s\" released in %d.\n",
                               album->title, album->artist, album->release_year);

        if (length >= sizeof(buffer) || length < 0) {
            return;
        }

        write(1, buffer, strlen(buffer));
    }
}
