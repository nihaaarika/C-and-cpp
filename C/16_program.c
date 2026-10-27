/* String */

#include <stdio.h>

int main (void) {
    char str[] = "Niharika";
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d\n", i);

    return 0;
}
