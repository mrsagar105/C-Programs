#include <stdio.h>
#include <string.h>

int main()
{
    char a[6] = "Hello";
    printf("char a[6] = \"Hello\"\n");
    printf("strlen(a) = %d\n", strlen(a)); // 5
    printf("sizeof(a) = %d\n", sizeof(a)); // 6

    char b[12] = "Hello";
    printf("\nchar b[12] = \"Hello\"\n");
    printf("strlen(b) = %d\n", strlen(b)); // 5
    printf("sizeof(b) = %d\n", sizeof(b)); // 12

    char c[] = "Hello";
    printf("\nchar c[] = \"Hello\"\n");
    printf("strlen(c) = %d\n", strlen(c)); // 5
    printf("sizeof(c) = %d\n", sizeof(c)); // 6

    char *d = "Hello";
    printf("\nchar *d = \"Hello\"\n");
    printf("strlen(d) = %d\n", strlen(d)); // 5
    printf("sizeof(d) = %d\n", sizeof(d)); // 8

    char *e = "Hello World";
    printf("\nchar *d = \"Hello World\"\n");
    printf("strlen(e) = %d\n", strlen(e)); // 11
    printf("sizeof(e) = %d\n", sizeof(e)); // 8

    return 0;
}
