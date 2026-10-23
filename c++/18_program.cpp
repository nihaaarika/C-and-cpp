// multiple catch 

#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (int x) {
        cout << "Integer exception";
    }
    catch (double x) {
        cout << "Double exception";
    }

    return 0;
}