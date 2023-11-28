#ifndef PRINT_ALBUM_H
#define PRINT_ALBUM_H

struct album {
    char *title;
    char *artist;
    int release_year;
};

void print_album(struct album *album);

#endif