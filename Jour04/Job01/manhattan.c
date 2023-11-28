#include "manhattan.h"

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int manhattan(point p1, point p2) {
    int distance = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return distance;
}