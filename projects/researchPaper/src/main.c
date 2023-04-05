#include<stdio.h>
#include<stdlib.h>
#define MIN_BUFFER 8
#define MAX_BUFFER 128
int main(){
    int buffer_size, previous_buffer;
    buffer_size = MIN_BUFFER;
    FILE *file = fopen("test.c", "r");
    char *buffer = (char *) malloc(buffer_size);
    for(buffer_size; buffer_size < MAX_BUFFER; buffer_size += buffer_size){
        fread(buffer, buffer_size, 1, file);
        previous_buffer += buffer_size;
        printf("%s", buffer);
    }
    free(buffer);
    return 0;
}