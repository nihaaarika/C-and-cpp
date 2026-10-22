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
    Dog d;
    d.sound();
    return 0;
}