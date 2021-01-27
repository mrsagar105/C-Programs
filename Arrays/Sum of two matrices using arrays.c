#include <stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3];

    printf("For 3x3 matrix A:\n");
    // taking input from user for Matrix A
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For 3x3 matrix B:\n");
    // taking input from user for Matrix B
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter b[%d][%d] = ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // adding corresponding elements of matrix A and B
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrix A and B:\n");
    // displaying all elements of 2D array. From sum[0][0] to sum[3][3]
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
