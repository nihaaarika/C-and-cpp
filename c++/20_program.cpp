// this - pointer

#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    void setRoll(int roll) {
        this->roll = roll;
    }

    void display() {
        cout << "Roll: " << roll;
    }
};

int main() {
    Student s1;
    s1.setRoll(25);
    s1.display();

    return 0;
}