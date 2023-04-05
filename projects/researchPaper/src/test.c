#include<stdio.h>
#include<stdlib.h>

#define MIN_BUFFER 8
#define MAX_BUFFER 64

int main(){
    FILE *file;
    file = fopen("main.c", "r");
    char *buffer;
    int ite;
    for(ite = MIN_BUFFER; ite <= MAX_BUFFER; ite += MIN_BUFFER){
        buffer = (char *)malloc(ite);
        buffer = fgets(buffer, ite, file);
        printf("[%d]:\n%s", ite, buffer);
        free(buffer);
    }
}