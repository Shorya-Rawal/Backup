#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define INSTRUCTION_CAPACITY 46
#define BUFFER_SIZE 8
struct instruction_set{
    char binary[8];
    char symbol[3];
};
int main(){
    FILE *b_file, *out_file;
    int ite, ite_inst;
    b_file = fopen("binaries/example", "r");
    out_file = fopen("assembly/out", "w");
    char *buffer = malloc(BUFFER_SIZE);
    struct instruction_set MCS4[INSTRUCTION_CAPACITY] = {
        {"00000000", "NOP"}, {"11100000", "WRM"}, {"11100001", "WMP"}, {"11100010", "WRR"},
    };
    for(ite = 0; ite < 6; ite++){
        fgets(buffer, BUFFER_SIZE, b_file);
        //printf("%s", buffer);
        if(strcmp(MCS4[ite].binary, buffer)) printf("%s\n", MCS4[ite].symbol);
        //for(ite_inst = 0; ite_inst < INSTRUCTION_CAPACITY; ite_inst++) 
            //fprintf(out_file, "%s\n", MCS4[ite].symbol);
    }
    free(buffer);
    fclose(out_file);
    fclose(b_file);
}
