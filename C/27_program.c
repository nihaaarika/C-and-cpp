/* Union */

#include <stdio.h>

union Data{
    int number;
    float marks;
};

int main () {
    union Data d;

    d.number= 100;
    printf("Number: %d", d.number);

    d.marks= 40.9;
    printf("Marks: %.2f", d.marks);

    return 0;
}