#include <iostream>
using namespace std;

class Person {
    public: 
    string name;

    void diplayName() {
        cout << "Name: " << name << endl;
    }
};

class Person : public Person {
    public:
    int rollNumber;

    void displayRollNumber() {
        cout << "Roll number: " << rollNumber << endl;
    }
};

int main () {
    Student s1;

    s1.name = "Niharika";
    s2.rollNumber = "21";

    s1.displayName();
    s2.displayrollNumber();

    return 0;
}
