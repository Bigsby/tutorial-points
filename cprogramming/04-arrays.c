#include <stdio.h>

void multidim(void);

int main()
{
    multidim();
    return 0;
}

void multidim()
{
    int a[3][3] = { { 1, 0, 1}, {0, 1, 0}, {1, 0, 1}};

    printf("Multi dimension\n");
    for (int rowIndex = 0; rowIndex < 3; rowIndex++) {
        for (int columnIndex = 0; columnIndex < 3; columnIndex++) {
            printf("%d", a[rowIndex][columnIndex]);
        }
        printf("\n");
    }
}