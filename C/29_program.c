/* Enumeration */

#include <stdio.h>

enum DAY {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
};

int main() {
    enum Day today = FRIDAY;

    printf("Day number: %d",today);

    return 0;
}