#ifndef MAPFUNC_H
#define MAPFUNC_H

#include <stdio.h>
#include <stdlib.h>

#define SIZE 255

extern struct DataStruct* MapStructure[SIZE];

struct DataStruct {
    int key;
    int data;
};

int hashCode(int key);
void map_insert(int key);
int map_check(char c);
void map_free();

#endif