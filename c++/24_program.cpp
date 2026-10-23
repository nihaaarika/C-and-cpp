// vector and sort()

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {30, 10, 20};

    sort(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}