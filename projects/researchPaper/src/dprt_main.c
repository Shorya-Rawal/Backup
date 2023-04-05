#include<stdio.h>
#include<stdlib.h>

#define MIN_BUFFER_SIZE 8
#define MAX_BUFFER_SIZE 32

void check(char *buffer);
int main(int argc, char *argv[]){
    int buffer_size = MIN_BUFFER_SIZE;
    int chunk_size = 0;
    char *buffer;
    FILE *file;
    while(chunk_size < 128){
    while(buffer_size < MAX_BUFFER_SIZE){
            buffer = (char *) malloc(buffer_size);
            file = fopen("main.c", "r");
            fseek(file, 0L, chunk_size);
            fread(buffer, sizeof(char *), buffer_size, file);
            check(buffer);
            free(buffer);
            chunk_size = ftell(file);
            fclose(file);
            buffer_size += MIN_BUFFER_SIZE;
        }
    }
}

void check(char *buffer){
    printf("%s\n", buffer);
}