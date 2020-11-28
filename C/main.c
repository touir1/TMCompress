#include <stdio.h>
#include <stdlib.h>
#include "CompressHandler.h"
#include "Utils.h"

void help();

int main(int argc, char* argv[])
{
    char* extension = ".tmc";

    if(argc == 2){
        int iterations = 0;
        char* source = replace(argv[1],"\\","/");
        char* destination = (char*)malloc((strlen(source) + strlen(extension) + 1) * sizeof(char));

        strcpy(destination,source);
        if(isDirectory(source) == 1){
            strcat(destination,extension);
            compress(source,destination,&iterations);
        }
        else{
            int lastIndexDot = lastIndexOf(source,'.');
            if(lastIndexDot == -1){
                strcat(destination,extension);
                compress(source,destination,&iterations);
            }
            else{
                destination = substring(source,1,lastIndexDot);
                strcat(destination,extension);
                compress(source,destination,&iterations);
            }
        }

    }
    else if(argc == 3){

    }
    else{
        printf("No arguments were provided\n");
        help();
    }
    return 0;
}

void help(){
    printf("TMCompress source [destination]\n");
    printf("source: file or folder to compress\n");
    printf("destination: folder where the compressed file will be created or a fullpath of the file to be created");
}
