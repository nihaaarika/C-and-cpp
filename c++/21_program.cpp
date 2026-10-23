// Dynamic memory allocation 

#include <iostream>
using namespace std;

int main() {
    int* p = new int(50);

    cout << *p <<endl;

    delete p;
    p = nullptr;

    return 0;
}