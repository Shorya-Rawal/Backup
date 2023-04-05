#include<stdio.h>
int *ASCII(char *str);
int *base4(int base10);
int main(){
    //char *str = "This is a string"; 
    //int *ascii = ASCII(str);
    //int len = sizeof(str);
    //for(int i = 0; i < 16; i++) printf("%d\n", str[i]);
    int *base4_encoded = base4(105);
    for(int i = 0; i < 16; i++) printf("%d\n", base4_encoded[i]);
}
int *ASCII(char *str){
    int len = sizeof(str)/sizeof(str[0]);
    int ascii_table[len];
    for(int ite = 0; ite < len; ite++){
        ascii_table[ite] = (int)str[ite];
    }
    return ascii_table;
}
int *base4(int base10){
    int res[8];
    for(int ite = 0; ite < 8; ite++){
        while(base10 > 0){
            res[ite] = base10 % 4;
            base10 = base10/4;
        }
    }
    return res;
}