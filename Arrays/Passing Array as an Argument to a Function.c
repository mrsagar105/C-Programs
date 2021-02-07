// Passing Array as an Argument to a Function

#include <stdio.h>

void modifyArray(int array[], int length)
{
    // adding 5 to all the elements
    for(int i = 0; i < length; i++) {
        array[i] = array[i] + 5;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int length = sizeof(a) / sizeof(a[0]);
    
    // passing base address of array 'a', not the whole array
    // name of the array represents the base address of the array
    modifyArray(a, length);

    // printing modified array
    printf("\nModified array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
