#include "stringlib.h"


int main(int args, char **argv) {
    const char *str = "Wonderful worlds that are spinning across the universe!";

    size_t amount = lib_writeBytes("file.txt", str);
    printf("%d\n", amount);
    
    return 0;   
}