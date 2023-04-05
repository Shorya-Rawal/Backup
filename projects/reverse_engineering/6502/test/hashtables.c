#include<stdio.h>
#define CAPACITY 56
struct hashtable{
    int binary;
    int label;
};
int main(){
    int ite;
    struct hashtable hex[CAPACITY] = {
        {0001, 1}, {0010, 2}, {0011, 3}, {0100, 4}, {0101, 5},
        {0110, 6}, {0111, 7}, {1000, 8}, {1001, 9}, {1010, 10},
        {1011, 11}, {1100, 12}, {1101, 13}, {1110, 14}, {1111, 15}
    };
    for(ite = 0; ite < 16; ite++) if(hex[ite].binary == 1010) printf("%d", hex[ite].label);
}