#include <stdio.h>

int main()
{
    int a[2][4];

    // taking input from user and storing inside 2D array. From a[0][0] to a[2][4]
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Enter Row %d and Column %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // displaying all elements of 2D array. From a[0][0] to a[2][4]
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // prints a new line after every row
    }

    return 0;
}
