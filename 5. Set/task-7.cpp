// Set-də elementləri tərsinə göstərin

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    cout << "Set-dəki elementlər tərsinə: ";
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
