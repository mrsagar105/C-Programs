#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};

    // as array 'a' is of integer type
    printf("sizeof a[0]: %d\n", sizeof(a[0])); // 4
    printf("sizeof a[1]: %d\n", sizeof(a[1])); // 4
    printf("sizeof a[2]: %d\n", sizeof(a[2])); // 4

    // as array 'a' has 6 integer elements so 6 * 4 = 24
    printf("sizeof a: %d\n", sizeof(a)); // 24

    // Finds the length of array
    printf("Length of array: %d\n", sizeof(a)/sizeof(a[0])); // 6

    return 0;
}
