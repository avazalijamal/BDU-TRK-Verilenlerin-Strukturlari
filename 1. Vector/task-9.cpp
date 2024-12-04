// Vektordan bir elementi silin

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    vec.erase(vec.begin() + 2); // 3-cü elementi silir

    cout << "Yenilənmiş vektor: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
