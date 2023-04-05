#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *buffer;
void file_read(FILE *file, int cursor);
int main(){
    FILE *source = fopen("source.sea", "r");
    char *hi;
    int count = 1, line = 0;
    while(1){
        buffer  = fgetc(source);
        if(buffer == '\n') break;
        count++;
    }
    rewind(source);
    hi = (char *)malloc(count);
    fgets(hi, count, source);
    printf("%s", hi);
    free(hi);
    fclose(source);
}
void file_read(FILE *file, int cursor){

}