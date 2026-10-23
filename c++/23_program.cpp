// Reading data 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    ifstream file ("student.txt");
    string name;

    if(file.is_open()) {
        getline(file, name);
        cout << name;
        file.close();
    }

    return 0;

}