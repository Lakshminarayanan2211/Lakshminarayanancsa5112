#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int key;

    printf("Enter Plain Text:\n ");
    scanf("%s", text);

    printf("Enter Number of Rails:\n ");
    scanf("%d", &key);

    int len = strlen(text);

    char rail[key][len];

    // Fill matrix with '\n'
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < len; j++)
        {
            rail[i][j] = '\n';
        }
    }

    int row = 0;
    int dir = 1;

    // Place characters
    for (int i = 0; i < len; i++)
    {
        rail[row][i] = text[i];

        if (row == 0)
            dir = 1;
        else if (row == key - 1)
            dir = -1;

        row += dir;
    }

    // Print encrypted text
    printf("Encrypted Text: ");

    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (rail[i][j] != '\n')
            {
                printf("%c", rail[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}