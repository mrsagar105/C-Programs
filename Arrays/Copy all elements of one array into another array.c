#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5};

    int length = sizeof(array1)/sizeof(array1[0]); // calculates the size of first array
    int array2[length]; // declaring second array of same size

    // Copy elements of first array into second array
    for(int i = 0; i < length; i++) {
        array2[i] = array1[i];
    }

    // Prints the elements of first array
    printf("Elements in array1: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", array1[i]);
    }

    // Prints the elements of second array
    printf("\nElements in array2: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}
