#ifndef _C_STRING_H
#define _C_STRING_H

typedef unsigned int size_t;

size_t strlen(const char *str);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t num);
char *strcat(char *dest, const char *src);
int strcmp(char *str1, char *str2);
int strncmp(char *str1, char *str2, size_t num);
const char *strchr(const char *str, char ch);
const char *strstr(const char *str1, const char *str2);

#endif
