/* Bubble sort */

#include <stdio.h>

int main (void) {
    int a[5];
    int i, j, temp;

    printf("Enter the 5 element");

    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    for(i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("sorted array: ");

    for(i=0; i<5; i++) {
        printf("%d", a[1]);
    }

    printf("\n");

    return 0;
}