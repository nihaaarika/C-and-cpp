// constructor overloading //

#include <iostream>
using namespace std;

class Demo {
    int x, y;

    public:
     Demo(): x(0), y(0) {}
     Demo(int a) : x(a), y(0) {}
     Demo(int a, int b) : x(a), y(b) {}
     Demo(const Demo& d) : x(d.x), y(d.y) {}

     void display() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(5);
    Demo d3(10, 20);
    Demo d4(d3);

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    return 0;
}

