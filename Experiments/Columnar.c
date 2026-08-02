#include <stdio.h> 
#include <string.h> 
  
int main() { 
    char text[100]; 
    int cols; 
  
    printf("Enter Plain Text: \n"); 
    scanf("%s", text); 
    printf("Enter Number of Columns: \n"); 
    scanf("%d", &cols); 
  
    int len = strlen(text); 
    int rows = (len + cols - 1) / cols; 
    char matrix[20][20]; 
    int k = 0; 
  
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            if (k < len) 
                matrix[i][j] = text[k++]; 
            else 
                matrix[i][j] = 'X'; 
        } 
    } 
  
    printf("Encrypted Text: "); 
for (int j = 0; j < cols; j++) { 
for (int i = 0; i < rows; i++) 
printf("%c", matrix[i][j]); 
} 
printf("\n"); 
return 0; 
} 