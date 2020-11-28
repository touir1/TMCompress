#include "Utils.h"

char * replace(char* original, char* pattern, char* replacement) {
    char *result; // the return string
    char *ins;    // the next insert point
    char *tmp;    // varies
    int len_rep;  // length of pattern (the string to remove)
    int len_with; // length of replacement (the string to replace pattern replacement)
    int len_front; // distance between pattern and end of last pattern
    int count;    // number of replacements

    // sanity checks and initialization
    if (!original || !pattern)
        return NULL;
    len_rep = strlen(pattern);
    if (len_rep == 0)
        return NULL; // empty pattern causes infinite loop during count
    if (!replacement)
        replacement = "";
    len_with = strlen(replacement);

    // count the number of replacements needed
    ins = original;
    for (count = 0; tmp = strstr(ins, pattern); ++count) {
        ins = tmp + len_rep;
    }

    tmp = result = malloc(strlen(original) + (len_with - len_rep) * count + 1);

    if (!result)
        return NULL;

    // first time through the loop, all the variable are set correctly
    // from here on,
    //    tmp points to the end of the result string
    //    ins points to the next occurrence of pattern in original
    //    original points to the remainder of original after "end of pattern"
    while (count--) {
        ins = strstr(original, pattern);
        len_front = ins - original;
        tmp = strncpy(tmp, original, len_front) + len_front;
        tmp = strcpy(tmp, replacement) + len_with;
        original += len_front + len_rep; // move to next "end of pattern"
    }
    strcpy(tmp, original);
    return result;
}

int isFile(const char* path){
    /*
    struct stat path_stat;
    if(stat(path, &path_stat) != 0)
        return 0;
    return S_ISREG(path_stat.st_mode);
    */
    return isDirectory(path) == 0? 1 : 0;
}

int isDirectory(const char* path){
    struct stat statbuf;
    if (stat(path, &statbuf) != 0)
        return 0;
    return S_ISDIR(statbuf.st_mode);
}

int lastIndexOf(const char * str, const char toFind){
    int index = -1;
    int i = 0;

    while(str[i] != '\0'){
        // Update index if match is found
        if(str[i] == toFind){
            index = i;
        }
        i++;
    }

    return index;
}

char *substring(char *string, int position, int length){
   char *p;
   int c;

   p = malloc(length+1);

   if (p == NULL){
      printf("Unable to allocate memory.\n");
      exit(1);
   }

   for (c = 0; c < length; c++){
      *(p+c) = *(string+position-1);
      string++;
   }

   *(p+c) = '\0';

   return p;
}


