#include "mapfunc.h"

struct DataStruct* MapStructure[SIZE];

int hashCode(int key) {
    return key % SIZE;
}

void map_insert(int key) {
    struct DataStruct *item = (struct DataStruct*) malloc(sizeof(struct DataStruct));
    item->key = key;
    item->data = 1;

    int hashIndex = hashCode(key);

    if (MapStructure[hashIndex] != NULL) {
        MapStructure[hashIndex]->data++;
        return;
    }

    MapStructure[hashIndex] = item;

    return;
}

int map_check(char c) {
    int hashIndex = c % SIZE;

    if (MapStructure[hashIndex] != NULL) {
        return 0;
    }

    return 1;
}

void map_free() {
    int i;

    for (i = 0; i < SIZE; i++) {
        free(*MapStructure + i);
    }
}