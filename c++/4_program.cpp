//Parameterized constructor //

#include <iostream>
using namespace std;

class Demo {
    int x, y;

    public:
    Demo(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << this->x << " " << this->y << endl;
    }
};

int main() {
    Demo d1(10, 20);
    d1.display();
    return 0;
}
