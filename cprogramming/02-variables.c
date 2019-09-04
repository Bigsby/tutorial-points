#include <stdio.h>

int main() {
    printf("Unassigned variables...");
    int a;
    printf("a is %d\n", a);
    char c;
    printf("c as char is %c\n", c);
    printf("c as int is %d\n", c);
    c = 'A';
    printf("c as char is %c\n", c);
    printf("c as int is %d\n", c);
    int b = 1;
    printf("b is %d\n", b);
    {
        printf("b is %d\n", b);
        char b = 2;
        // int b; // compiler error
        printf("b is %d\n", b);
    }

    {
        printf("b is %d\n", b);
        int b;
        printf("b is %d\n", b);
    }
    printf("b is %d\n", b);
    return 0;
}