// copying string without using strcpy()

#include <stdio.h>

int main (void) {
    char str[] = "Hello";
    char str2[20];
    int i = 0;

    while(str[1] != '\0') {
        str2[i] = str[i];
        i++;
    }

    str2[i] = '\0';

    printf("Copied string = %s\n", str2);
    printf("Length = %d\n", i);

    return 0;
}