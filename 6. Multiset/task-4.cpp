// Multiset-də elementin sayını tapın

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 10, 30, 10};

    cout << "10 elementinin sayı: " << ms.count(10) << endl;

    return 0;
}
