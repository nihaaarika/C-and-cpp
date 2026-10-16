// Object oriented programming 

#include <iostream>
using namespace std;

class Student {
    public:

    int marks;

    void display() {
        cout <<"Marks :"<< marks << endl;
    }
};

int main() {
    Student s1;
    s1.marks = 90;
    s1.display();

    return 0;
}