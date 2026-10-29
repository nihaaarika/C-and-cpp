/* Function */

#include <stdio.h>

int add (int, int);  /*Function prototype */

int main(void) {
    int result = add (5, 3);

    printf("sum = %d", result);

    return 0;
}

int add (int a, int b) {
    return a+b;
}