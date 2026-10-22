// Function overridding //

#include <iostream>
using namespace std;

class Animal {
    public:
    void sound() {
        cout << "Make a sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    return 0;
}

