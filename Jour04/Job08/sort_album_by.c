#include "./album.h"
#include <stdlib.h>

void sort_album_by(struct album *list, int (*cmp)(const struct album *, const struct album *)) {
    int swapped;
    struct album *ptr1;
    struct album *lptr = NULL;

    if (list == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = list;

        while (ptr1->next != lptr) {
            if (cmp(ptr1, ptr1->next) > 0) {
                // Swap the albums
                struct album *temp = ptr1;
                ptr1 = ptr1->next;
                ptr1->next = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
