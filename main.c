#include "stringlib.h"

int main(int args, char **argv) {
    const char src[30] = "Hello my wonderful friend";
    char dest[50];

    printf("cpy: %s | %d\n", lib_memcpy(dest, src, strlen(src)), strlen(lib_memcpy(dest, src, strlen(src))));
    printf("cpy: %s | %d\n", lib_memcpy(dest, src, 10), strlen(lib_memcpy(dest, src, 10)));   
    return 0;   
}