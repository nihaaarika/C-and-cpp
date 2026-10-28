/* Reverse */

#include <stdio.h>
int main (void) {
    char str[] = "Hello";
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

     printf("Reverse = ");

    for(int j = i-1; j>=0; j--) {
        printf("%c", str[j]);
    }

    printf("\n");

    return 0;

}