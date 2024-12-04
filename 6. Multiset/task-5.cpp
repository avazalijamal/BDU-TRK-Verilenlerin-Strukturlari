// Multiset-dən yalnız bir dublikatı silin

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 10, 30};

    cout << "Silinmədən əvvəl multiset: ";
    for (int i : ms) {
        cout << i << " ";
    }

    auto it = ms.find(10); // İlk uyğun 10-u tap
    if (it != ms.end()) {
        ms.erase(it); // Yalnız bir dənə 10-u sil
    }

    cout << "\nSilinmədən sonra multiset: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
