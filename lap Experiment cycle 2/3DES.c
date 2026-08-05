#include <stdio.h>
#include <string.h>

int main() {
    char text[100], k1[20], k2[20], k3[20];
    int i;

    printf("Enter Plain Text: ");
    scanf("%s", text);

    printf("Enter Key1: ");
    scanf("%s", k1);

    printf("Enter Key2: ");
    scanf("%s", k2);

    printf("Enter Key3: ");
    scanf("%s", k3);

    for(i=0;i<strlen(text);i++)
        text[i] ^= k1[i % strlen(k1)];

    for(i=0;i<strlen(text);i++)
        text[i] ^= k2[i % strlen(k2)];

    for(i=0;i<strlen(text);i++)
        text[i] ^= k3[i % strlen(k3)];

    printf("Encrypted Text: %s\n", text);

    return 0;
}