#include "stringlib.h"

// Compares two strings and returns 0 if they are equal 
// or value > 0 or value < 0 depending on the position
// of two characters in the alphabet
int lib_strcmp(const char *str1, const char *str2) {
    if (lib_strlen(str1) != lib_strlen(str2)) {
        return 1;
    }

    while((*str1 == *str2) && *str1 != '\0') {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

// Compares first n bytes of two strings and returns 0 if they are equal 
// or value > 0 or value < 0 depending on the position
// of two characters in the alphabet
int lib_strcmp_n(const char *str1, const char *str2, size_t n) {
    if ((lib_strlen(str1) != lib_strlen(str2)) || (n > lib_strlen(str1))) {
        return 1;
    }

    int count = 1;
    while((*str1 == *str2) && (count++ != n)) {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

// Returns the pointer to the first occurance of the character c in the string str
char *lib_strchr(const char *str, int c) {
    while(*str != '\0') {
        if (*str == c) {   
            return (char *)str;
        }
        
        str++;
    }

    return NULL;
}

// Copies one string to another
// The source string is: src. The destination string is: dest
int lib_strcpy(char *dest, const char *src) {
    char *ptr = (char *)src;

    while(*ptr != '\0') {
        *dest++ = *ptr++;
    }
    *dest = '\0';

    return 0;
}

// Copies first n bytes of one string to another
// The source string is: src. The destination string is: dest
int lib_strcpy_n(char *dest, const char *src, size_t n) {
    char *ptr = (char *)src;

    int count = 0;
    while((*ptr != '\0') && (count++ != n)) {
        *dest++ = *ptr++;
    }
    *dest = '\0';

    return 0;
}

// Finds the first character in the string str1 that matches any character specified in str2
// and then returns a pointer to that character.
char *lib_strpbrk(const char *str1, const char *str2) {    
    while(*str2 != '\0') {
        map_insert(*str2);
        str2++;
    }

    while(*str1 != '\0') {
        if (map_check(*str1) == 0) {
            return (char*)str1;
        }
        str1++;
    }
}
// Searches for the first occurrence of the character c
// in the first n bytes of the string pointed to by the argument str
void *lib_memchr(const void *str, int c, size_t n) {
    const unsigned char* cstr = (const unsigned char*)str;

    int count = 0;
    while(*cstr != '\0' && count++ != n) {
        if (*cstr == c) {   
            return (unsigned char *)cstr;
        }
        
        cstr++;
    }

    return NULL;
}

// Copies n characters from memory area src to memory area dest
void *lib_memcpy(void *dest, const void *src, size_t n) {
    const unsigned char* csrc = (const unsigned char*)src;
    unsigned char* cdest = (unsigned char*)dest;
    unsigned char* cptr = cdest;
    
    int count = 0;
    while(*csrc != '\0' && count++ != n){
        *cptr++ = *csrc++;
    }
    *cptr = '\0';

    return (void*)cdest;
}

// Compares the first n bytes of str1 and str2
int lib_memcmp(const void *str1, const void *str2, size_t n) {    
    const unsigned char *cstr1 = (const unsigned char*) str1;
    const unsigned char *cstr2 = (const unsigned char*) str2; 

    if ((lib_strlen(cstr1) != lib_strlen(cstr2)) || (n > lib_strlen(cstr1))) {
        return 1;
    }

    int count = 1;
    while((*cstr1 == *cstr2) && (count++ != n)) {
        cstr1++;
        cstr2++;
    }

    return *cstr1 - *cstr2;
}

// Calculates the length of the initial segment of the string str1
// which consists entirely of characters not in str2
size_t lib_strcspn(const char *str1, const char *str2) {
    char *ptr_1 = (char*)str1;
    char *ptr_2 = (char*)str2;

    int count = 0;
    while(*ptr_1 != '\0') {
        if (*ptr_1++ != *ptr_2) {
            count++;
        } else {
            return count;
        }
    }
}

// Computes the length of the string str up to but not including the terminating null character
size_t lib_strlen(const char *str) {
    size_t len = 0;

    while(*str++ != '\0') {
        len++;
    }
    return len;
}