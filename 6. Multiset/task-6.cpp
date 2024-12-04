// Multiset-dəki elementlərin ümumi sayını tapın

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {5, 10, 15, 10};

    cout << "Multiset-dəki elementlərin ümumi sayı: " << ms.size() << endl;

    return 0;
}
