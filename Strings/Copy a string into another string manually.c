#include <stdio.h>

int main()
{
    char a[6] = "Hello";
    char b[6];

    // copies the content of string a to string b using for loop.
    int i;
    for(i = 0; a[i] != '\0'; i++) {
        b[i] = a[i];
    }
    b[i] = '\0';

    printf("%s", b);
    return 0;
}
