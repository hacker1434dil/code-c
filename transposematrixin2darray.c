#include <stdio.h>
#define ROWS 3
#define COLS 2

int main() {
    int mat[ROWS][COLS] = {{1, 2}, {3, 4}, {5, 6}};
    int transpose[COLS][ROWS];

    // Calculate transpose
  {
	  for(int i = 0; i < ROWS; ++i) {
        for(int j = 0; j < COLS; ++j) {
            transpose[j][i] = mat[i][j];
        }
    }
}
    // Display original
    printf("Original Matrix:\n");
    for(int i = 0; i < ROWS; ++i) {
        for(int j = 0; j < COLS; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose:\n");
    for(int i = 0; i < COLS; ++i) {
        for(int j = 0; j < ROWS; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

