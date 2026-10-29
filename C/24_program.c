/* Pointer */

#include <stdio.h>

int main (void){
    int a = 10;
    int *p = &a;

    printf("Value of a %d", a);
    printf("Address of a %p", (void *)&a);
    printf("Address stored in p = %p", (void *)p);
    printf("Value pointed to by p = %d", *p);

    return 0;
}