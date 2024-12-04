// Set-dən müəyyən elementi silin

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    cout << "Silinmədən əvvəl set: ";
    for (int i : s) {
        cout << i << " ";
    }

    s.erase(20); // 20-ni sil

    cout << "\nSilinmədən sonra set: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
