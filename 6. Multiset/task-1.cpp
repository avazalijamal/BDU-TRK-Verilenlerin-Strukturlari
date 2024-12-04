// Multiset yaradaraq təkrarlanan elementləri əlavə edin və onları göstərin.

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> numbers = {1, 2, 2, 3, 4, 4, 5};

    cout << "Multiset-dəki elementlər: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
