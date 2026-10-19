// copy constructor //

#include <iostream>
using namespace std;

class Demo{
    int x , y;

    public:
    Demo(int a, int b) : x(a), y(b) {}

    Demo(const Demo& d) : x(d.x), y(d.y) {}

    void display() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Demo d1(10, 20);
    Demo d2(d1);

    d1.display();
    d2.display();

    return 0;
}
