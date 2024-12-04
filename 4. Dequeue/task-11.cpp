// Deque-dakı elementləri tərsinə göstərin

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40, 50};

    reverse(dq.begin(), dq.end());  // Deque-nu tərsinə çevir

    cout << "Deque tərsinə: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
