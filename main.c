#include "stringlib.h"

int main(int args, char **argv) {
    char src[80] = "Hello my wonderful friend! ";
    char dest[50] = "How are you today?";

    printf("test: %s\n", lib_strcat_n(src, dest, 7));
    return 0;   
}