/* typedef */

#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} Student;

int main() {
    Student s1 = {101, 67.8};

    printf("Roll: %d", s1.roll);
    printf("Marks: %.2f", s1.marks);

    return 0;
}