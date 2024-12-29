#include <stdio.h>

int main()
{
    int i, j;
    int A[3][4] = {
        {1, 3, 5, 7},
        {9, 4, 7, 1},
        {1, 3, 2, 5},
    };
    for (i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d, ", A[i][j]);
        }
        printf("\n");
    }

    int *B[3];
    for (i = 0; i <= 2; i++)
    {
        B[i] = (int *)malloc(4 * sizeof(int));
    }

    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i <= 2; i++)
    {
        C[i] = (int *)malloc(4 * sizeof(int));
    }
}