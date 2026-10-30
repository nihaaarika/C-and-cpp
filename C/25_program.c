/* Structure */

#include <stdio.h>

struct Student {
    int roll;
    char name [30];
    float marks;
};

int main() {
    struct Student s1 = {101, "Rahul", 85.5};

    printf("Roll number: %d", s1.roll);
    printf("Name: %s", s1.name);
    printf("Marks: %.2f", s1.marks);

    return 0;

}
