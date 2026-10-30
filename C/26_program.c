/* Arrays of structure */

#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s[3] = {
        {101, 95.7},
        {102, 98.4},
        {103, 99.3},
    };

    for(int i=0; i<3; i++){
        printf("Roll number: %d, Marks: %.2f", s[i].roll, s[i].marks);
    }

    return 0;
}