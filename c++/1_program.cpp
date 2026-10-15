//Default Constructor 

#include <iostream>
using namespace std;

class demo {
    int x, y;

    public: 
      demo() {
        x=0;
        y=0;
    }

    void display() {
        cout << "x = "<< x << endl;
        cout << "y = "<< y << endl;
    }
};

int main() {
    demo d1;

    d1.display();

    return 0;
}