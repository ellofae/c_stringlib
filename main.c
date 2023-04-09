#include "stringlib.h"


int main(int args, char **argv) {
    const char *str = "Wonderful worlds that are spinning across the universe!";

    while(*str != '\0') {
        lib_writeOneByte("file.txt", *str++);
    }
    
    return 0;   
}