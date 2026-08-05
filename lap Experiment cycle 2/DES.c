#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key[20];
    int i;
    printf("Enter Plain Text: \n");
    scanf("%s", text);
    printf("Enter Key: \n");
    scanf("%s", key);
    printf("Encrypted Text: ");
    for(i=0; i<strlen(text); i++) {
        printf("%c", text[i] ^ key[i % strlen(key)]);
    }
    printf("\n");
    printf("Decrypted Text: ");
    for(i=0; i<strlen(text); i++) {
        printf("%c", (text[i] ^ key[i % strlen(key)]) ^ key[i % strlen(key)]);
    }
    printf("\n");
    return 0;
}