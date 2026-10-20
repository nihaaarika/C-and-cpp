// Destructor //

#include <iostream>
using namespace std;

class Demo {

    public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called"<< endl;
    }
};

int main () {
    Demo d1;
    cout << "Object is being used" << endl;

    return 0;
}

