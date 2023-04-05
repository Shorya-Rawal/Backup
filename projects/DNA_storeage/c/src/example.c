#include<stdio.h>
#include<string.h>
#include "headers/base64.h"
int main(){
    char *data = "Hello world";
    long input_size = strlen(data);
    char *out = base64_encode(data, input_size, &input_size);
    printf("Encoded data: %s\n", out);

    long decoded_size = strlen(out);
    char *in = base64_decode(out, decoded_size, &decoded_size);
    printf("Decoded data: %s", in);
    return 0;
}