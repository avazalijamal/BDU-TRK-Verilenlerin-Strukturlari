// Multiset-dən müəyyən elementi silin

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 10, 30};

    cout << "Silinmədən əvvəl multiset: ";
    for (int i : ms) {
        cout << i << " ";
    }

    ms.erase(10); // Bütün 10-ları silir

    cout << "\nSilinmədən sonra multiset: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
