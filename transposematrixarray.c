#include <stdio.h>
int main()
{
    int a[2][2], T[2][2], i, j, r, c;
    printf("Enter the number of rows and columns in the matrix A: ");
    scanf("%d%d", &r, &c);

    printf("Enter the elements in the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);  
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            T[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}

