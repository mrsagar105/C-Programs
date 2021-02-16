#include <stdio.h>

int main()
{
    char a[] = "Hello";

    // points to the 1st character of string
    // prints until it reaches the NULL character '\n'
    printf("%s\n", a); // Hello

    // points to the 1st character of string + 1 i.e 2nd
    printf("%s\n", a+1); // ello

    // points to the 1st character of string + 2 i.e 3rd
    printf("%s\n", a+2); // llo

    // prints the first 3 characters
    printf("%.3s", a); // Hel

    // puts()
    // Same as printf() function.
    // Does not require %s.
    // Automatically adds a new line character.
    puts(a); // Hello

    return 0;
}
