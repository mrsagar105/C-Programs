#include <stdio.h>

// bubble sort function
int bubbleSort(int *array, int size)
{
    int temp;

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-1-i; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[100], size;

    // storing number of elements in variable size 
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // taking input in array
    for(int i = 0; i < size; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // printing unsorted array
    printf("\nUnsorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    // function for sorting array
    bubbleSort(array, size);

    // printing sorted array
    printf("\nSorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
