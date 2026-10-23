// File handling 

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file ("student.txt");

    file << "Niharika";
    file.close();
    return 0;
}
