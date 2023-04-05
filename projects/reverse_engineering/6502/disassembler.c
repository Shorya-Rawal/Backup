#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 56
typedef struct{
    int binary;
    char *symbol;
} instruction_set;
int main(){
    FILE *b_file = fopen("binaries/one", "r");
    char *buffer = (char *)malloc(9);
    int filesize, ite;
    fseek(b_file, 0l, SEEK_END);
    filesize = ftell(b_file);
    fseek(b_file, 0l, SEEK_SET);
    for(ite = 0; ite < filesize; ite += 9){
        if(getc(b_file) == '\n') continue;
        fgets(buffer, 9, b_file);
        printf("%s", buffer);
    }
    free(buffer);
    fclose(b_file);
    return 0;
}