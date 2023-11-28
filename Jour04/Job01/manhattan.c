#include "manhattan.h"
#define abs(x) ((x) < 0 ? -(x) : (x))

int manhattan(point p1, point p2) {
    int distance = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return distance;
}