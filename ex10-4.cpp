#include <iostream>

int main()
{
    int myAge = 43;
    int *p;
    printf("myAge value = %d\n", myAge);
    printf("myAge's address in memory = %p", &myAge);//Ourputs 07ffe5367e044
    
    p = &myAge;

    printf("pointer p's value = %d\n", *p);

    return 0;
}
