#include "stringlib.h"


int main(int args, char **argv) {
    const char *str = "Wonderful worlds that are spinning across the universe!";

    size_t n = lib_readFile("file1.txt");
    printf("%d\n", n);
    
    return 0;   
}