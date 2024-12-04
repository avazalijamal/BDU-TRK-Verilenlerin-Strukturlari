// Vektoru sıralayın

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {40, 10, 30, 20};

    sort(vec.begin(), vec.end());

    cout << "Sıralanmış vektor: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
