// Multiset-dəki ən kiçik və ən böyük elementləri tapın

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {15, 10, 25, 5};

    cout << "Ən kiçik element: " << *ms.begin() << endl;
    cout << "Ən böyük element: " << *ms.rbegin() << endl;

    return 0;
}
