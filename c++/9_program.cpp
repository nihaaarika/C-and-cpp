#include <iostream>
using namespace std;

class Person {
    public: 
    string name;

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    public:
    int rollNumber;

    void displayRollNumber() {
        cout << "Roll number: " << rollNumber << endl;
    }
};

int main () {
    Student s1;

    s1.name = "Niharika";
    s1.rollNumber = 21;

    s1.displayName();
    s1.displayRollNumber();

    return 0;
}
