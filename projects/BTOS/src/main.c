#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRLEN 2
char *segment, *split[ARRLEN];
int ite;
void analyser(char inputstring[12]);
int main(){
    analyser("1 10011001");
    printf("%s", split[1]);
    return 0;
}
void analyser(char inputstring[12]){
    char *token = strtok(inputstring, " ");
    for(ite = 0; ite < ARRLEN; ite++){
        if(token == NULL) break;
        split[ite] = malloc(8);
        split[ite] = token;
        token = strtok(NULL, " ");
    }
}