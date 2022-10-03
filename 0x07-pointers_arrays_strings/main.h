#ifndef _MAIN_H
#define _MAIN_H
#include <stddef.h>

char *_memset(char *s, int c, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle0);

#endif
