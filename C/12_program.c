/* Find the largest and smallest number in an array */

#include <stdio.h>
int main (void) {
    int a[5];
    int i, largest, smallest;

    printf("Enter the 5 numbers:");

    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(i=1; i<5; i++) {
        if (a[i] > largest) {
            a[i] = largest;
        }

        if(a[i] < smallest) {
            a[i] = smallest;
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
}