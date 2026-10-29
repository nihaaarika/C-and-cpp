/* Call by value */

#include <stdio.h>

void change (int x) {
    x = 100;
}

int main (void) {
    int a = 10;

    change(a);

    printf("a = %d", a);

    return 0;
}