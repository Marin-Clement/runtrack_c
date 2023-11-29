#ifndef ALBUM_H
#define ALBUM_H

struct album {
    char *title;
    char *artist;
    int release_year;
    struct album *next;
};

void print_album(const struct album *album);
struct album *realloc_album(struct album *albums, int current_size, int new_size);
void push_back_album(struct album *list, struct album *new_album);
void push_front_album(struct album **list, struct album *new_album);
void album_del_one(struct album **list, struct album *target_album);
void sort_album_by(struct album *list, int (*cmp)(const struct album *, const struct album *));

#endif