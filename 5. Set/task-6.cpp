// Set-dəki ən kiçik və ən böyük elementləri tapın

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {15, 10, 25, 5};

    cout << "Ən kiçik element: " << *s.begin() << endl;
    cout << "Ən böyük element: " << *s.rbegin() << endl;

    return 0;
}
