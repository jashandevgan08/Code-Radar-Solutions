#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) { 
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
