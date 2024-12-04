// Vektordakı elementləri tərsinə sıralayın

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};

    reverse(vec.begin(), vec.end());

    cout << "Tərsinə sıralanmış vektor: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
