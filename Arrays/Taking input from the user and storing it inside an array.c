#include <stdio.h>

int main()
{
    int a[10];

    // takes 5 values from the user
    // and stores them inside array 'a' from a[0] to a[4]
    for(int i = 0; i <= 4; i++) {
        scanf("%d", &a[i]);
    }

    return 0;
}
