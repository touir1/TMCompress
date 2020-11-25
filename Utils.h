#ifndef __Utils_h
#define __Utils_h
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

// file functions
int isFile(const char* path);
int isDirectory(const char* path);

// string functions
int lastIndexOf(const char * str, const char toFind);
char *substring(char *string, int position, int length);
char* replace(char* original, char* pattern, char* replacement);

#endif // __Utils_h
