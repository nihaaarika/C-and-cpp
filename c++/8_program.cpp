// Dynamic constructor //

#include <iostream>
using namespace std;

class Demo {
    int* p;

    public:
    Demo(int value) {
        p = new int(value);
    }

    ~Demo () {
        delete p;
    }
    
    void display() {
        cout << *p << endl;
    }
};

int main() {
    Demo d1(50);
    d1.display();
    return 0;
}