/* Linear search*/

#include <stdio.h>
int main (void) {
    int a[5];
    int i, key, found =0;

    printf("Enter 5 numbers: ");

    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of search:");
    scanf("%d", &key);

    for(i=0; i<5; i++) {
        if(a[i] == key) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Element found at index %d", i);
    }

    else {
        printf("Element not found");
    }

    return 0;
}
