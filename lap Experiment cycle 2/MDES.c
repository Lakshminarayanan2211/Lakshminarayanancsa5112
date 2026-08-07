#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char key, iv;

    printf("Enter text: \n");
    scanf("%s", text);

    printf("Enter key: \n");
    scanf(" %c", &key);

    printf("Enter IV: \n");
    scanf(" %c", &iv);

    for (int i = 0; i < strlen(text); i++) {
        text[i] ^= iv;
        text[i] ^= key;
        iv = text[i];
    }

    printf("Encrypted: %s\n", text);

    return 0;
}