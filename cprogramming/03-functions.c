#include <stdio.h>

int change (int, int*);

int main () 
{
    int v = 2;
    int x = 2;
    printf("0 value is %d\n", v);
    v = change(v, &x);
    printf("2 value is %d\n", v);
    printf("3 value is %d\n", x);
    return 0;
}

int change(int a, int* b)
{
    printf("1 value is %d\n", a);
    a = 5;
    *b = 15;
    return a;
}