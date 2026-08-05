#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key1[20], key2[20];
    int i;
    printf("Enter Plain Text: \n");
    scanf("%s", text);
    printf("Enter Key1: \n");
    scanf("%s", key1);
    printf("Enter Key2: \n");
    scanf("%s", key2);
    for(i=0;i<strlen(text);i++)
        text[i] ^= key1[i % strlen(key1)];
    for(i=0;i<strlen(text);i++)
        text[i] ^= key2[i % strlen(key2)];
    printf("Encrypted Text: %s\n", text);
    return 0;
}