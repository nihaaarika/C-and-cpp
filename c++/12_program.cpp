// Pure virtual function 

#include <iostream>
using namespace std;

class Shape {
    public: 
    virtual void Draw() = 0;
};

class Circle : public Shape {
    public:
    void Draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Circle c;
    c.Draw();
    return 0;
}
