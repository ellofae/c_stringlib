#ifndef STRINGLIB_H
#define STRINGLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#include "mapfunc.h"

#define PERMS 0666
#define BUFSIZE 4096

// String functionality
int lib_strcmp(const char *str1, const char *str2);
int lib_strcmp_n(const char *str1, const char *str2, size_t n);
int lib_strcpy(char *dest, const char *src);
int lib_strcpy_n(char *dest, const char *src, size_t n);  

void *lib_memchr(const void *str, int c, size_t n);
void *lib_memcpy(void *dest, const void *src, size_t n);
int lib_memcmp(const void *str1, const void *str2, size_t n);

char *lib_strchr(const char *str, int c);
char *lib_strpbrk(const char *str1, const char *str2);
char *lib_strcat(char *dest, const char *src);
char *lib_strcat_n(char *dest, const char *src, size_t n);

size_t lib_strcspn(const char *str1, const char *str2);
size_t lib_strlen(const char *str);

// Strings with files functionality
size_t lib_writeBytes(const char *filename, const char *src);
size_t lib_writeOneByte(const char *filename, const char c);
size_t lib_copyFiles(const char *dest, const char *src);

#endif