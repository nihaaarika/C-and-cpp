// Virtual function //

#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void sound () {
        cout << "Mkae a sound" << endl;
    }
};

class Dog: public Animal {
    public: 
    void sound() override {
        cout << "Dog is barks" << endl;
    }
};

int main() {
    Animal* ptr;  //Create a pointer to a base class 
    Dog d;
    
    ptr = &d;       //makes the pointer refer to a Dog object.
    ptr->sound();  // calls Dog's overridden function because sound() is virtual.

    return 0;
}