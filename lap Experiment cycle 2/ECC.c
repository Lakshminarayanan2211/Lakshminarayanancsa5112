#include<stdio.h>
int main() {
    int privateKey=7;
    int G=9;
    int publicKey=privateKey*G;
    printf("Private Key=%d\n",privateKey);
    printf("Generator Point=%d\n",G);
    printf("Public Key=%d\n",publicKey);
    return 0;
}