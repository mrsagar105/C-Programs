#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5};

    int length = sizeof(array1)/sizeof(array1[0]); // calculates the size af array1
    int array2[length]; // declaring array2 of same size

    // copies the corresponding element of array1 to array2
    for(int i = 0; i < length; i++) {
        array2[i] = array1[i];
        printf("%d ", array2[i]);
    }

    return 0;
}
