#include <stdio.h>

int main()
{
    int i, j;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("i = %d, j = %d, i * j = %d\n", i, j, i * j);
        }
    }

    return 0;
}
