#ifndef encoding_h
#define encoding_h

#include<stdio.h>
int base4(int base10){
    int str[8];
    for(int ite = 0; ite < 8, ite++){
        while(base10 > 0){
            str[ite] = base10 % 4;
            base10 = base10/4;
        }
    }
}

#endif /* encoding_h */