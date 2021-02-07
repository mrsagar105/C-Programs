#include <stdio.h>

// selection sort function
void selectionSort(int array[], int size)
{
    int temp;

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int a[100], size;

    // storing number of elements in variable size 
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // taking input in array
    for(int i = 0; i < size; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // printing unsorted array
    printf("\nUnsorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    // function for sorting array
    // passing base address of array 'a'
    selectionSort(a, size);

    // printing sorted array
    printf("\nSorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
