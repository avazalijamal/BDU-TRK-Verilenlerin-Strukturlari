// Multiset-ə elementlər əlavə edin və göstərin

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // Dublikat əlavə olunur
    ms.insert(30);

    cout << "Multiset-dəki elementlər: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
