#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *source = fopen("test.sea", "r");
    char *buffer, ite;
    buffer = (char *)malloc(64);
    int position = 0, line_size = 0;
    while(ite != EOF){
        fseek(source, 0l, position);
        while(ite != '\n'){
            ite = fgetc(source);
            line_size++;
        }
        position = line_size + 1;
        fgets(buffer, line_size, source);
        printf("%s", buffer);
    }
}