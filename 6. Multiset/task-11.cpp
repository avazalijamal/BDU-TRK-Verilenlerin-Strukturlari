// Multiset-də elementləri tərsinə göstərin

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 40, 50};

    cout << "Multiset-dəki elementlər tərsinə: ";
    for (auto it = ms.rbegin(); it != ms.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
