#include <stdio.h>

// storing address of a and b in pointer variable num1 and num2
void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    
    // passing address of variable a and b as an argument
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);

    return 0;
}
