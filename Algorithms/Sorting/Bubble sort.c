#include <stdio.h>

// bubble sort function
void bubbleSort(int *a, int size)
{
    int temp;

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-1-i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
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
    bubbleSort(a, size);

    // printing sorted array
    printf("\nSorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
